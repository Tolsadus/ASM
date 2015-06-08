section .text
	global _ft_bzero

_ft_bzero:
	jmp boucle
boucle:
	cmp rsi, 0 ; deuxieme argument
	je fin ; saut vers fonction fin pour return
	mov byte[rdi], 0
	inc rdi ; premier argument (string s)
	dec rsi ; deuxieme argument (n qu'on --)
	jmp boucle

fin:
	ret
