	.file	"swap.c"
.globl bufp0
	.data
	.align 4
	.type	bufp0, @object
	.size	bufp0, 4
bufp0:
	.long	buf
	.comm	bufp1,4,4
	.text
.globl swap
	.type	swap, @function
swap:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$buf+4, bufp1
	movl	bufp0, %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	bufp0, %eax
	movl	bufp1, %edx
	movl	(%edx), %edx
	movl	%edx, (%eax)
	movl	bufp1, %eax
	movl	-4(%ebp), %edx
	movl	%edx, (%eax)
	leave
	ret
	.size	swap, .-swap
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-16)"
	.section	.note.GNU-stack,"",@progbits
