mov ah,09h
mov al,'h'
mov bh,0
mov bl,4
mov cx,1

int 10h

times 512-($-$$)  db 0