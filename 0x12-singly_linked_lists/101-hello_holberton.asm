section .data
hello db "Hello, Holberton", 0

section .text
global main
extern printf
extern exit

main:
mov rdi, hello
call printf

mov rdi, 1 ; intentionally setting a non-zero status code
call exit
