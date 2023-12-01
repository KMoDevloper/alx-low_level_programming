#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Prints an error message to stderr and exits with a specified status code.
 * @msg: The error message to print.
 * @status: The exit status code.
 */
void error_exit(const char *msg, int status)
{
	dprintf(2, "%s\n", msg);
	exit(status);
}

/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
		printf("%02x%c", header->e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - System V" : "unknown");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename", 98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Unable to open file", 98);

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit("Error: Unable to read ELF header", 98);

	if (lseek(fd, 0, SEEK_SET) == -1)
		error_exit("Error: Unable to seek back to the beginning of the file", 98);

	print_elf_header(&header);

	close(fd);

	return (0);
}
