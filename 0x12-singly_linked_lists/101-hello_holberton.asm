section .data
hello db "Hello, Holberton", 0

section .text
global main
extern printf

main:
sub rsp, 8 ; Align the stack (must be a multiple of 16 before calling printf)
mov rdi, hello
mov rax, 0 ; printf uses the xmm0 rgister for floating-printf arguments, clear it
call printf
add rsp, 8 ; Clean up the stack
ret
