section .data
hello db "Hello, Holberton", 0

section .text
global main
extern printf
extern exit

main:
mov rdi, hello
call printf

mov rdi, 0 ; Status code
call exit
