;Adam Szefer
;K1502532
;Jeff Cayaban
; TA: Lucas Lindenroth

;  byte-addressable computer with 15-bit addresses, cache: 2K bytes, blocks of 8 bytes
;Q1a) Offset: 3 ( because 8 = 2^3)
;     Block: 8 (cache/blocks: 2*2^10/2^3 = 2^8)
;     Tag: 15-8-3 = 4



;firstly we clear the SREG, then we set DDRB to the output mode
;then load 15 to the register 17-th, 3 to the register 18-th and 8 to the register 19-th
;then we substruct register 18-th and 19-th from the register 17-th

.equ SREG, 0x3f
.equ PORTB, 0x05
.equ DDRB, 0x04


.org 0

main:	ldi r17, 0
	  out SREG,r17
	  
	  ldi r17, 0x0F
	  out DDRB, r17
	  
	  ldi r17, 0x0F
	  ldi r18, 0x03
	  ldi r19, 0x08
	  
	  sub r17, r18
	  sub r17, r19
	  
	  
	  out PORTB, r17
	  
mainloop:	rjmp mainloop

