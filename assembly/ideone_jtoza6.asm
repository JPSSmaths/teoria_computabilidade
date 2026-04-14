global _start

section .data
    n dd 5                  
    msg db 'Resultado: ',0
    resultado dd 0

section .bss

section .text
    global _start

_start:
    mov eax, 1
    mov ebx, 1
    mov ecx, [n]

loop:
    cmp ebx, ecx
    jg fim

    imul eax, ebx
    inc ebx

    jmp loop

fim:
    mov [resultado], eax
    mov eax, 1
    xor ebx, ebx
    int 80h
