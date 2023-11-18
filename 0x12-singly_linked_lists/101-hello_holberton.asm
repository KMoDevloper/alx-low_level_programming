section .data
hello db "Hello, Holberton", 0

section .text
global main
extern printf

main:
sub rsp, 8 ; Align the stack (must be a multiple of 16 before calling printf)
mov rdi, hello
call printf
add rsp, 8 ; Clean up the stack
ret
