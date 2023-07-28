.global main
.global setup
.global loop

.data

.text

setup:
  ; Set pin 13, 2, and 3 as outputs
  sbi DDRB, 5
  sbi DDRD, 2
  sbi DDRD, 3

  ; Jump to loop
  rjmp loop

loop:
  ; Set pins 2 and 3 high
  sbi PORTD, 2
  sbi PORTD, 3
  ; Set pin 13 high
  sbi PORTB, 5

  ; Delay for 1000 milliseconds
  ldi r18, 100
  ldi r17, 0
  ldi r16, 0
  call Delay

  ; Set pin 13 low
  cbi PORTB, 5

  ; Delay for 1000 milliseconds
  ldi r18, 100
  ldi r17, 0
  ldi r16, 0
  call Delay

  ; Jump back to loop
  rjmp loop

Delay:
  ; Decrement r16
  dec r16
  ; Branch if r16 is not equal to zero
  brne Delay
  ; Decrement r17
  dec r17
  ; Branch if r17 is not equal to zero
  brne Delay
  ; Decrement r18
  dec r18
  ; Branch if r18 is not equal to zero
  brne Delay
  ; Return from subroutine
  retk