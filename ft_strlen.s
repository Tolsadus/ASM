section .text
	global _ft_strlen

_ft_strlen:
	xor		al, al
	xor		rcx, rcx
	not		rcx
	jmp strlen

strlen:
	cld
	repne scasb
	not rcx
	dec rcx
	mov rax, rcx
	ret
