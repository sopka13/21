;This function counts the number of characters in a string

global ft_strlen

section .text
ft_strlen:
	mov rcx, -1					;put start value
cycle:
	inc rcx						;RCX++
	cmp BYTE [rdi + rcx], 0		;compare character number and zero
	jne cycle					;if not equal go repeat

exit:
	mov rax, rcx				;put result
	ret