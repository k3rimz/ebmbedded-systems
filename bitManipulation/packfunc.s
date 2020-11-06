	.global _Z8packBitsi
_z8packBitsi:

	mov r2, #0
	
	mov r1, #0 @ countup to r0

1:	
	lsl r2, #3 @ shift the answer left
	orr r2, r1 @ or in the new 3-bit number
	add r1, #1 @ count up by 1
	
	cmp r1, r0 @ compare the ending number with the count	
	ble 1b

	mov r0, r2

	bx lr


_Z9packBits2i:
	

	mov r2, r0
	
	mov r0, #0 @ countup to r0

1:	
	ror r0, #3 @ shift the answer left
	orr r0, r2 @ or in the new 3-bit number
	sub r2, #1 @ count up by 1
	
		
	bge 1b
	ldr r3, #32
	sub r1, r3, r1
	lsr r0, r1

	bx lr

	@this is better as the inner loop gets larger and larger


	@for ror - rotate right
	@ 0000000000000000000000000000111
	@ 1110000000000000000000000000110
	@ 1101110000000000000000000000101
	@ 1011101110000000000000000000100
	@ 1001011101110000000000000000011
	@ 0000010100111001011101110000000

	
