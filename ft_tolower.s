global _ft_tolower

section .text

_ft_tolower:
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jg false
	jmp lower

lower:
	add rdi, 32
	mov rax, rdi
	ret

false:
	mov rax, rdi
	ret
