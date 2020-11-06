	.global _Z3sumPii

_Z3sumPii:
	@r0 = address of memory
	@r1 = number of elements
	mov	r3, r0
	mov	r0, #0
	
1:
	ldr	r2, [r0] @load the element at location r0
	add	r3, r2   @add onto the running sum
	add	r0, #4
	
	
	subs	r1, #1
	blt	1b
	@r3 = sum of all elements

	bx	lr
	
	
