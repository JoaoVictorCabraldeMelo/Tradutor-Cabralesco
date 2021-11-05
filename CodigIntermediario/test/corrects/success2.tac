.table
float x1
int a1
float b1
float c1
float x2
int y2
int NIL [] = { 0 }
.code
inttofl $0, a1
mul $1, b1, $0
div $2, c1, $1
sub $3, $2, x1
mov x1, $3
mov y2, 0
mul $4, 2, y2
fltoint $5, x2
mul $6, 2, y2
inttofl $7, y2
mul $8, x2, $7
inttofl $0, 2
div $1, $8, $0
fltoint $2, $1
mov y2, $2
inttofl $3, y3
inttofl $4, y3
mov x2, $4
