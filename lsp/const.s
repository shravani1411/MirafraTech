	.file	"const.c"
	.text
	.section	.rodata
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	20
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.zero	4
	.data
	.align 4
	.type	a, @object
	.size	a, 4
a:
	.long	10
	.local	b
	.comm	b,4,4
	.globl	c
	.section	.rodata
.LC0:
	.string	"xyz"
	.section	.data.rel.local,"aw"
	.align 8
	.type	c, @object
	.size	c, 8
c:
	.quad	.LC0
	.section	.rodata
.LC1:
	.string	"%p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	x.2320(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$100, -12(%rbp)
	leaq	x.2320(%rip), %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.data
	.align 4
	.type	x.2320, @object
	.size	x.2320, 4
x.2320:
	.long	30
	.section	.rodata
	.align 4
	.type	y.2321, @object
	.size	y.2321, 4
y.2321:
	.zero	4
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
