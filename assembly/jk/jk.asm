sbi 4,5   ; set ddrb as output (pin13)
Loop:     ; Label name
sbi 5,5   ;set bit 5 from portb
call Delay   ; call subroutine and save prog counter
cbi 5,5      ;clear bit 5 from portb
call Delay   ; call subroutine again to.....
rjmp LOOP    ; jump to label nam loop, start over
Delay:          ;label name
sbr r18, 0xff  ;put 11111111 in rigister r18
sbr r17, 0xff  ;put 11111111 in rigister r17
sbr r16, 0xff  ;put 11111111 in rigister r16
wait:          ;label name
dec r16        ;Decrement r16 (-1)
brne wait      ; jump to label name wait if <> zero
dec r17        ;Decrement r16 (-1)
brne wait      ;jump to label name wait if <> zero
dec r18        ;Decrement r16 (-1)
brne wait      ;jump to label name wait if <> zero
ret            ;go back to call --> pc +1