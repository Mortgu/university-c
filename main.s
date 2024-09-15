	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 5
	.globl	_maxEvenRec                     ; -- Begin function maxEvenRec
	.p2align	2
_maxEvenRec:                            ; @maxEvenRec
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	.cfi_def_cfa_offset 48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #16]
	str	w1, [sp, #12]
	str	w2, [sp, #8]
	str	wzr, [sp, #4]
	str	wzr, [sp]
	ldr	w8, [sp, #8]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_2
	b	LBB0_1
LBB0_1:
	stur	wzr, [x29, #-4]
	b	LBB0_7
LBB0_2:
	ldr	x8, [sp, #16]
	ldrsw	x9, [sp, #12]
	ldr	w8, [x8, x9, lsl #2]
	mov	w10, #2
	udiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_4
	b	LBB0_3
LBB0_3:
	ldr	x8, [sp, #16]
	ldrsw	x9, [sp, #12]
	ldr	w8, [x8, x9, lsl #2]
	str	w8, [sp, #4]
	b	LBB0_4
LBB0_4:
	ldr	x0, [sp, #16]
	ldr	w8, [sp, #12]
	add	w1, w8, #1
	ldr	w8, [sp, #8]
	subs	w2, w8, #1
	bl	_maxEvenRec
	str	w0, [sp]
	ldr	w8, [sp, #4]
	ldr	w9, [sp]
	subs	w8, w8, w9
	cset	w8, le
	tbnz	w8, #0, LBB0_6
	b	LBB0_5
LBB0_5:
	ldr	w8, [sp, #4]
	stur	w8, [x29, #-4]
	b	LBB0_7
LBB0_6:
	ldr	w8, [sp]
	stur	w8, [x29, #-4]
	b	LBB0_7
LBB0_7:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #112
	.cfi_def_cfa_offset 112
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-8]
	add	x0, sp, #28
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	mov	w1, #0
	str	w1, [sp, #24]                   ; 4-byte Folded Spill
	mov	x2, #60
	bl	_memset
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	ldr	w1, [sp, #24]                   ; 4-byte Folded Reload
	mov	w8, #100
	str	w8, [sp, #28]
	mov	w8, #23
	str	w8, [sp, #32]
	mov	w8, #34
	str	w8, [sp, #36]
	mov	w8, #11
	str	w8, [sp, #40]
	mov	w8, #12
	str	w8, [sp, #44]
	mov	w2, #5
	bl	_maxEvenRec
	mov	x9, sp
                                        ; implicit-def: $x8
	mov	x8, x0
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldur	x9, [x29, #-8]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB1_2
	b	LBB1_1
LBB1_1:
	bl	___stack_chk_fail
LBB1_2:
	mov	w0, #0
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	add	sp, sp, #112
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%i"

.subsections_via_symbols
