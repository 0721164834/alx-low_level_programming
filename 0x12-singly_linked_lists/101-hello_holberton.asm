section .data
	hello_fmt db "Hello, Holberton,", 0

section .text
	global print_hello
	extern printf

print_hello:
	push rbp
	mov rdi, hello_fmt
	call printf
	pop rbp
	ret
