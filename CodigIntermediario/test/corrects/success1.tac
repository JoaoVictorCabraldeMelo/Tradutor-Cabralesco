.table
int a1
float b1
int c1
int d1
float y1
int a2
float b2
int c2
int d2
int x2
int NIL [] = { 0 }
.code
inttofl $0, a1
mul $1, b1, $0
inttofl $2, c1
sub $3, $1, $2
inttofl $4, d1
div $5, $3, $4
mov y1, $5
fltoint $6, y1
inttofl $7, c2
add $8, b2, $7
inttofl $0, a2
mul $1, $8, $0
fltoint $2, $1
mov x2, $2
fltoint $3, b2
mov a2, 0
fltoint $4, b2
add $5, a2, 1
mov a2, $5
add $6, c2, 1
mov c2, $6
mov x2, $6
