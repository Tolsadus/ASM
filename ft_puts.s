section .data
	backslash:		db		10
	nullstr:		db		"(null)"

section .text
	global _ft_puts

_ft_puts:
	cmp rdi, 0
	je doEmpty
	mov rsi, rdi
	xor rdx, rdx

doSize:
	cmp byte[rdi], 0
	je doPrint
	inc rdi
	inc rdx
	jmp doSize

doPrint:
	mov rax, 0x2000004      ; System call write = 4
	mov rdi, 1
	syscall
	jc doEnd

	cmp rax, 0
	jl doEnd

	mov rax, 0x2000004      ; System call write = 4
	mov rsi, 1              ; Write to standard out = 1
	lea rsi, [rel backslash]
	mov rdx, 1
	syscall

doEmpty:
	mov rax, 0x2000004      ; System call write = 4
	mov rsi, rdi            ; Write to standard out = 1
	lea rdi, [rel nullstr]
	syscall
	jc doEnd
	ret

doEnd:
	ret
