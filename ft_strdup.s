section .text
	global _ft_strdup

extern _malloc
extern _ft_strlen
extern _ft_memcpy

_ft_strdup:
	jmp		strlen
	jmp		malloking
	jmp		copy

strlen:
	push	rdi
	call	_ft_strlen

malloking:
	push	rax
	mov		rdi, rax
	call	_malloc

copy:
	mov		rdi, rax
	pop		rdx
	pop		rsi
	call	_ft_memcpy
	ret
