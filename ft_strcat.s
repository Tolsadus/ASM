section .text
	global _ft_strcat

_ft_strcat:
	mov		r8, rdi
endchar:
	cmp		byte[rdi], 0
	je		copychar
	inc		rdi
	jmp		endchar

copychar:
	mov		al, byte[rsi]
	mov		byte[rdi], al
	cmp		byte[rsi], 0
	je		back
	inc		rsi
	inc		rdi
	jmp		copychar

back:
	mov		rax, r8
	ret
