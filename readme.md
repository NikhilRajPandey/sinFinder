Assumptions: % as modulo not as percentage

>> Calculate sin(15) as sin(30/2) = sin(30).cos(30).1/2

>> Calculate A' such that A-A' < 0.01 and A' = 15(x1) + 15(x2) + 15(x3) .....
    [Note x1,x2,x3... can be fraction and x1 > x2 > x3 .....]

>> Now sin(x1+x2+x3.....) can be determined by this pseudocode
    F = x1
    while(x not end):
        F = sin(F+x(i+1)) = sin(F).cos(x(i+1)) + sin(x(i+1)).cos(F)