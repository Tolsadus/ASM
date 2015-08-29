section .text
    global _ft_strdup
    extern _ft_strlen
    extern _ft_memcpy
    extern _ft_bzero
    extern _malloc

_ft_strdup:
    ; check rdi
    cmp rdi, 0
    je ret0
    push rdi

    ; get rdi length and save it
    call _ft_strlen
    push rax

    ; malloc of 8 * (length + 1)
    mov rdi, rax
    inc rdi
    imul rdi, 8
    push rdi
    call _malloc
    pop rdi

    ; b_zero the string
    mov rdi, rax
    pop rsi
    inc rsi
    call _ft_bzero
    push rsi

    ; call memcpy
    pop rdx
    pop rsi
    mov rdi, rax
    call _ft_memcpy
    jmp end

ret0:
    mov rax, 0
    ret

end:
    ret
