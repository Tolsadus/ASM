global _ft_toupper

section .text

_ft_toupper:
	cmp rdi, 97
	jl false
	cmp rdi, 122
	jg false
	jmp upper

upper:
	sub rdi, 32
	mov rax, rdi
	ret

false:
	mov rax, rdi
	ret
