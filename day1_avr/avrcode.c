;
start:
       LDI R16,LOW(RAMEND)
       OUT  SPL,R16
       LDI R16,HIGH(RAMEND)
       OUT  SPH,R16

        LDI r16,0xF1
        LDI R17,0xC1
        ADD  R16,R17
        PUSH   R1
        PUSH   R2
        PUSH   R3
        PUSH   R4
        PUSH   R5
        PUSH   R6
        PUSH   R7
        PUSH   R8
        PUSH   R9
        PUSH   R10
        PUSH   R11
        PUSH   R12
        PUSH   R13
        PUSH   R14
        PUSH   R15
        PUSH   R16
        PUSH   R17
        PUSH   R18
        PUSH   R19
        PUSH   R20
        PUSH   R21
        PUSH   R22
        PUSH   R23
        PUSH   R24
        PUSH   R25
        PUSH   R26
        PUSH   R27
        PUSH   R28
        PUSH   R29
        PUSH   R30
        PUSH   R31
        IN R16,SREG
        PUSH   R16
        LDI R16,0x01
        LDI R17,0x02
        ADD  R16,R17

        POP    R16
        OUT    SREG,R16
        POP  R31
        POP  R30
        POP  R29
        POP  R28
        POP  R27
        POP  R26
        POP  R25
        POP  R24
        POP  R23
        POP  R22
        POP  R21
        POP  R20
        POP  R19
        POP  R18
        POP  R17
        POP  R16
        POP  R15
        POP  R14
        POP  R13
        POP  R12
        POP  R11
        POP  R10
        POP  R9
        POP  R8
        POP  R7
        POP  R6
        POP  R5
        POP  R4
        POP  R3
        POP  R2
        POP  R1
        POP  R0
forever:
   nop
   nop       ; Infinite loop.
   nop       ; Define your main system
   nop       ; behaviour here
rjmp forever


