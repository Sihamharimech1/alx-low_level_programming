section .data
    message db 'Hello, Holberton', 10, 0 ; null-terminated string with newline character

section .text
    global _start

_start:
    mov rax, 1 ; set system call number for write
    mov rdi, 1 ; set file descriptor (stdout) for write
    mov rsi, message ; set message pointer for write
    mov rdx, 17 ; set message length for write
    syscall ; call write system call

    mov rax, 60 ; set system call number for exit
    xor rdi, rdi ; set exit status to 0
    syscall ; call exit system call
