section .text
	global _ft_memcpy

_ft_memcpy:
	mov		r10, rax
	mov		rcx, rdx
	mov		al, sil
	jmp		stock
	jmp		end

stock:
	cld
	rep		movsb

end:
	mov		rax, r10
	ret
