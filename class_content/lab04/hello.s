	.file	"hello.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello World"
.LC2:
	.string	"sqrt(4) is %f\n"
.LC3:
	.string	"Max value is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC0, %edi
	call	puts
	movsd	.LC1(%rip), %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	movl	$1000, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	0
	.long	1073741824
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-28.0.1)"
	.section	.note.GNU-stack,"",@progbits
