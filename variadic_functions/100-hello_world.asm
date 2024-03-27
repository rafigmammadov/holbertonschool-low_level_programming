section .data
    hello db 'Hello, World', 10
    hello_len equ $ - hello

section .text
    global main

main:
    mov rdi, 1
    mov rsi, hello
    mov rdx, hello_len
    mov rax, 1
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
