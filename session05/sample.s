	.global main
main:
	mov r0, #17
	add r0, r0, #3
	mov r1, #20
	add r2, r0, r1
	sub r0, r1
	cmp r0, r2
	bgt .gt
	ldr r3, =0xDEADBEEF
	
	
.gt:
	bx lr
	
