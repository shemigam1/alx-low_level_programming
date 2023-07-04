section .data
	format db "Hello, Holberton", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 8
	mov rdi, format
	xor eax, eax
	call printf
	mov rdi, newline
	xor eax, eax
	call printf

	mov eax, 0x60
	xor edi, edi
	syscall

section .bss
	resb 8
