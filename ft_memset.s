section .text
	global _ft_memset

_ft_memset:
	mov		r10, rax
	mov		rcx, rdx
	mov		al, sil
	jmp		stock
	jmp		end

stock:
	cld
	rep		stosb

end:
	mov		rax, r10
	ret
