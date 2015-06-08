section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 47
	jle false
	cmp rdi, 58
	jge false
	jmp true

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret
