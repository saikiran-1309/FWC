.include "<include your path here>/m328Pdef.inc"





ldi r17, 0b11100011 ;identifying output pins 2,3,4
out DDRD,r17	

ldi r17,0b11111111  ;  activating pull ups
out PORTD,r17

ldi r16,0b00000001
out DDRB,r16            ;declaring 8th pin as output

start:                   ;loop for reading the input from pins 2,3,4 continously

        in r17,PIND             ;reading the data from pins 2,3,4
;Taking z
        ldi r24,0b00000100
        mov r18,r17
        and r18,r24
        ldi r25,0b00000010
        loopx:  lsr r18
        dec r25
        brne    loopx
        .DEF Z = r18
;Taking y
        mov r19,r17
        ldi r24,0b00001000
        and r19,r24
        ldi r25,0b00000011
        loopy:  lsr r19
        dec r25 
        brne	loopy

        .DEF Y = r19
;Taking x
        ldi r24,0b00010000
        mov r20,r17
        and r20,r24
         ldi r25,0b00000100
        loopz:  lsr r20
        dec r25
        brne    loopz
        .DEF X = r20
        
        ldi r21,0x00
        ldi r22,0x00
        ldi r23,0x00
        .DEF T1 = r21
        .DEF T2 = r22
        .DEF T3 = r23

;carry equation

        mov T1,X
        mov T2,Y
       mov T3,Z
       and r26,T1,T2      ; Perform X AND Y and store the result in register r26
       and r27,T2,T3      ; Perform Y AND Z and store the result in register r27
       and r28,T3,T1      ; Perform Z AND X and store the result in register r28
       or r29,r26,r27     ; Perform XY + YZ and store the result in register r29
       or r30,r28,r29     ; Perform XY + YZ + ZX and store the result in the output variable
       out PORTB,r30

rjmp start