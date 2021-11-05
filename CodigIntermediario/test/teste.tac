.table
int a1
int b1
int c1
int d1
float y1
int a2
int b2
int c2
int d2
int x2
.code
mul $0, a1, b1
add $1, c1, b1
sub $2, $0, $1
div $3, $2, d1
inttofl $4, $3
mov y1, $4
fltoint $5, y1
mov b2, 1
add $6, b2, c2
mul $7, a2, $6
mov x2, $7
mov a2, 0
add $8, a2, 1
mov a2, $8
add $0, c2, 1
mov c2, $0
mov x2, $0
