section .multiboot_header
header_start:
    ; Magic number
    dd 0xe85250d6 ; for multiboot2
    ; Set our architecture
    dd 0 ; For i386 protected mode
    ; Get the header length
    dd header_end - header_start
    ; Have a checksum to make sure nothing is corrupted
    dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start))
    ; End tags
    dw 0
    dw 0
    dd 8
header_end: