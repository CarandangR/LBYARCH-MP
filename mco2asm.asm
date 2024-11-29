section .data

section .text
bits 64
default rel
global assemblyCompute
global compute_start
global exit

assemblyCompute:
    xor r8, r8               

compute_start:
    cmp r8, rcx             
    jge exit

    movss xmm1, dword [rdi + r8 * 4]

    mulss xmm1, xmm0        

    movss xmm2, dword [rsi + r8 * 4]

    addss xmm1, xmm2        

    movss dword [rdx + r8 * 4], xmm1

    inc r8                   
    jmp compute_start

exit:
    ret
