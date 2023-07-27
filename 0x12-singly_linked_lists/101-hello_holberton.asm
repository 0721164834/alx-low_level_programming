section .data
	hello_msg db "Hello, Holberton,", 0
	format db "%s\n", 0

section .text
	extern printf

global _start

_start:
	;Call printf to print the message
	mov rdi, format
	mov rsi, hello_msg
	xor rax, rax ; Clear RAX register for vararg
	call printf

	;Exit the program
	mov rax, 60	;syscall: sys_exit
	xor rdi, rdi	;status: 0
	syscall
