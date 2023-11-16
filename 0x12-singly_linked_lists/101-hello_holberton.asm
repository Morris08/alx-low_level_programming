section .data
      hello db "Hello, Holberton", 0
      format db "%s", 10, 0

section .text
      global main
      extern printf

main:
      push rdi
      push rsi
      push rdx

      mov rdi, format
      mov rsi, hello
      call printf

      pop rdx
      pop rsi
      pop rdi

      mov rax, 60
      mov rdi, rdi
      syscall
