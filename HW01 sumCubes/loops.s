	.global _Z8sumCubesii
	
_Z8sumCubesii:		@initializes the function with registers r0 & r1
	mov r2, r1
	mov r1, r0
	mov r0, #0
	
	
1:
	mul r3, r1, r1
	mul r3, r3, r1
	add r0, r0, r3
	add r1, #1
	cmp r1, r2
	ble 1b
	
	bx lr

	
	
