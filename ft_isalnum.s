section .text
	global _ft_isalnum

extern _ft_isdigit
extern _ft_isalpha

_ft_isalnum:
	call _ft_isdigit
	cmp rax, 1
	jne next
	ret

next:
	call _ft_isalpha
	cmp rax, 1
	ret

