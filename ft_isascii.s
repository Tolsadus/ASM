section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl false
	cmp rdi, 127
	jg false
	jmp true

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret
