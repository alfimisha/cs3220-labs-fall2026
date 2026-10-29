#*****************************************************************************
# random_stress.S
#-----------------------------------------------------------------------------
#
# Randomized DIV/MULT stress test.
#
.section .text
.globl _start
_start:
    li x1, 0
    li x2, 0
    li x3, 0
    li x4, 0
    li x5, 0
    li x6, 0
    li x7, 0
    li x8, 0
    li x9, 0
    li x10, 0
    li x11, 0
    li x12, 0
    li x13, 0
    li x14, 0
    li x15, 0
    li x16, 0
    li x17, 0
    li x18, 0
    li x19, 0
    li x20, 0
    li x21, 0
    li x22, 0
    li x23, 0
    li x24, 0
    li x25, 0
    li x26, 0
    li x27, 0
    li x28, 0
    li x29, 0
    li x30, 0
    li x31, 0
    lui x5, 0x1 # x5 = data block base
    addi x5, x5, -2048
    li x3, 2 # gp=2: hang before/inside burst means a deadlock
burst:
    lw x29, 0(x5) # op0: load ALUOP
    lw x30, 4(x5) # op0: load OP1
    lw x31, 8(x5) # op0: load OP2
    sw x27, 12(x5) # op0: store result (119298 / 354 = 337)
    lw x29, 16(x5) # op1: load ALUOP
    lw x30, 20(x5) # op1: load OP1
    lw x31, 24(x5) # op1: load OP2
    sw x27, 28(x5) # op1: store result (900 * 199 = 179100)
    lw x29, 32(x5) # op2: load ALUOP
    lw x30, 36(x5) # op2: load OP1
    lw x31, 40(x5) # op2: load OP2
    sw x27, 44(x5) # op2: store result (669 * 377 = 252213)
    lw x29, 48(x5) # op3: load ALUOP
    lw x30, 52(x5) # op3: load OP1
    lw x31, 56(x5) # op3: load OP2
    sw x27, 60(x5) # op3: store result (77952 / 448 = 174)
    lw x29, 64(x5) # op4: load ALUOP
    lw x30, 68(x5) # op4: load OP1
    lw x31, 72(x5) # op4: load OP2
    sw x27, 76(x5) # op4: store result (391160 / 635 = 616)
    lw x29, 80(x5) # op5: load ALUOP
    lw x30, 84(x5) # op5: load OP1
    lw x31, 88(x5) # op5: load OP2
    sw x27, 92(x5) # op5: store result (20368 / 134 = 152)
    lw x29, 96(x5) # op6: load ALUOP
    lw x30, 100(x5) # op6: load OP1
    lw x31, 104(x5) # op6: load OP2
    sw x27, 108(x5) # op6: store result (201924 / 474 = 426)
    lw x29, 112(x5) # op7: load ALUOP
    lw x30, 116(x5) # op7: load OP1
    lw x31, 120(x5) # op7: load OP2
    sw x27, 124(x5) # op7: store result (53582 / 146 = 367)
    lw x29, 128(x5) # op8: load ALUOP
    lw x30, 132(x5) # op8: load OP1
    lw x31, 136(x5) # op8: load OP2
    sw x27, 140(x5) # op8: store result (87958 / 199 = 442)
    lw x29, 144(x5) # op9: load ALUOP
    lw x30, 148(x5) # op9: load OP1
    lw x31, 152(x5) # op9: load OP2
    sw x27, 156(x5) # op9: store result (85330 / 805 = 106)
    li x3, 3 # check op0
    lw x21, 12(x5) # read back result
    lui x22, 0x43a88 # expected 119298 / 354 = 337
    bne x21, x22, fail
    li x3, 4 # check op1
    lw x21, 28(x5) # read back result
    lui x22, 0x482ee # expected 900 * 199 = 179100
    addi x22, x22, 1792
    bne x21, x22, fail
    li x3, 5 # check op2
    lw x21, 44(x5) # read back result
    lui x22, 0x48765 # expected 669 * 377 = 252213
    addi x22, x22, -704
    bne x21, x22, fail
    li x3, 6 # check op3
    lw x21, 60(x5) # read back result
    lui x22, 0x432e0 # expected 77952 / 448 = 174
    bne x21, x22, fail
    li x3, 7 # check op4
    lw x21, 76(x5) # read back result
    lui x22, 0x441a0 # expected 391160 / 635 = 616
    bne x21, x22, fail
    li x3, 8 # check op5
    lw x21, 92(x5) # read back result
    lui x22, 0x43180 # expected 20368 / 134 = 152
    bne x21, x22, fail
    li x3, 9 # check op6
    lw x21, 108(x5) # read back result
    lui x22, 0x43d50 # expected 201924 / 474 = 426
    bne x21, x22, fail
    li x3, 10 # check op7
    lw x21, 124(x5) # read back result
    lui x22, 0x43b78 # expected 53582 / 146 = 367
    bne x21, x22, fail
    li x3, 11 # check op8
    lw x21, 140(x5) # read back result
    lui x22, 0x43dd0 # expected 87958 / 199 = 442
    bne x21, x22, fail
    li x3, 12 # check op9
    lw x21, 156(x5) # read back result
    lui x22, 0x42d40 # expected 85330 / 805 = 106
    bne x21, x22, fail
pass:
    li x3, 1
    nop
    nop
    nop
    nop
    j theend
fail:
    nop
    nop
    nop
    nop
    j theend
theend:
    nop
    nop
    nop
    nop

.section .data
.org 0x470  # data placed at 0x800 via link.ld
    .word 0x00000001  # ALUOP (119298 / 354 = 337)
    .word 0x47e90100  # OP1
    .word 0x43b10000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000002  # ALUOP (900 * 199 = 179100)
    .word 0x44610000  # OP1
    .word 0x43470000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000002  # ALUOP (669 * 377 = 252213)
    .word 0x44274000  # OP1
    .word 0x43bc8000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (77952 / 448 = 174)
    .word 0x47984000  # OP1
    .word 0x43e00000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (391160 / 635 = 616)
    .word 0x48beff00  # OP1
    .word 0x441ec000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (20368 / 134 = 152)
    .word 0x469f2000  # OP1
    .word 0x43060000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (201924 / 474 = 426)
    .word 0x48453100  # OP1
    .word 0x43ed0000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (53582 / 146 = 367)
    .word 0x47514e00  # OP1
    .word 0x43120000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (87958 / 199 = 442)
    .word 0x47abcb00  # OP1
    .word 0x43470000  # OP2
    .word 0x00000000  # result slot
    .word 0x00000001  # ALUOP (85330 / 805 = 106)
    .word 0x47a6a900  # OP1
    .word 0x44494000  # OP2
    .word 0x00000000  # result slot
