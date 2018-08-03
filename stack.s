	.file	"stack.c"
	.section	.rodata
.LC0:
	.string	"\345\240\206\346\240\210\346\273\241 "
	.text
	.globl	Push
	.type	Push, @function
Push:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	400(%eax), %eax
	cmpl	$99, %eax
	jne	.L2
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	jmp	.L1
.L2:
	movl	8(%ebp), %eax
	movl	400(%eax), %eax
	leal	1(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, 400(%eax)
	movl	8(%ebp), %eax
	movl	400(%eax), %edx
	movl	8(%ebp), %eax
	movl	12(%ebp), %ecx
	movl	%ecx, (%eax,%edx,4)
	nop
.L1:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	Push, .-Push
	.section	.rodata
.LC1:
	.string	"\345\240\206\346\240\210\344\270\272\347\251\272"
	.text
	.globl	Pop
	.type	Pop, @function
Pop:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	400(%eax), %eax
	cmpl	$-1, %eax
	jne	.L5
	movl	$.LC1, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$-1, %eax
	jmp	.L6
.L5:
	movl	8(%ebp), %eax
	movl	400(%eax), %edx
	movl	8(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	leal	-1(%edx), %ecx
	movl	8(%ebp), %edx
	movl	%ecx, 400(%edx)
.L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	Pop, .-Pop
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	$0, %eax
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
