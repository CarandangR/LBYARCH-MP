section .text
bits 64
default rel
global assemblyCompute

assemblyCompute:
    xor r12, r12

compute_start:
    cmp r12, rcx
    jge compute_exit

    movss xmm1, dword [rdx + r12 * 4]
    mulss xmm1, xmm0

    movss xmm2, dword [r8 + r12 * 4]

    addss xmm1, xmm2

    movss dword [r9 + r12 * 4], xmm1

    inc r12
    jmp compute_start

compute_exit:
    ret