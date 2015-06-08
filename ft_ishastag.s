section .text
	global _ft_ishastag

_ft_ishastag:
	cmp		rdi, 35
	je		true
	jmp		false

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret

