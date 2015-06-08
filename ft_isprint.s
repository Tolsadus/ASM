section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	jl false
	cmp rdi, 127
	jge false
	jmp true

false:
	mov rax, 0
	ret

true:
	mov rax, 1
	ret
