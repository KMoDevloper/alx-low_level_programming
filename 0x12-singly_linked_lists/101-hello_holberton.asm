section .data
hello db "Hello, Holberton", 0

section .text
global main
extern printf
extern exit

main:
sub rsp, 8 ; Align the stack
mov rdi, hello
call printf
add  rsp, 8 ; Clean up the stack
mov eax, 0 ; Return 0 from main
ret
