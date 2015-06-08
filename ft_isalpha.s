section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jg minus
	jmp true

minus:
	cmp rdi, 122
	jg false
	cmp rdi, 97
	jge true
	jmp false

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret

