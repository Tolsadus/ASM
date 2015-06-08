default rel

section .data
	kfc		equ		256

section .bss
	buf		resb	kfc

section .text
	global _ft_cat

_ft_cat:
	mov		rbx, rdi

lecture:
	lea		rsi, [buf] ; load effective address
	mov		rdi, rbx
	mov		rdx, kfc
	mov		rax, 0x2000003 ; appel du read
	syscall
	jc		fin
	cmp		rax, 0
	jl		fin
	jne		ecriture
	ret

ecriture:
	mov		rdx, rax
	mov		rdi, 1
	mov		rax, 0x2000004 ; appel de write
	syscall
	jc		fin
	cmp		rax, 0
	jl		fin
	jmp		lecture

fin:
	ret
