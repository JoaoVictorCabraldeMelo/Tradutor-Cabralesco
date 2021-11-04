.table
int a0
int b0
int c0
int d0
float y1
int a1
int b1
int c1
int d1
int x1
.code
mul $0, a, b
sub $1, $0, c
div $2, $1, d
inttofl $3, $2
mov y, $3
fltoint $4, y
mov b, 1
add $5, b, c
mul $6, a, $5
mov x, $6
mov a, 0
add $7, a, 1
mov a, $7
add $8, c, 1
mov c, $8
mov x, $8
