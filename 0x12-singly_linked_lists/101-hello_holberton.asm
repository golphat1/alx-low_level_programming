section .data
message db 'Hello, Holberton',0

section .text
    global _start

_start:
    ; setup the stack
    xor rsp, rsp
    sub rsp, 8

    ; call printf with message as the argument
    mov rdi, message
    call printf

    ; return value 0 to indicate success
    xor rax, rax
    add rsp, 8
    ret
