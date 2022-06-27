from math import sqrt
def alt(m):
    n = (m+1)/2
    altura = int(sqrt(m-1))
    qtInternos = m - int(n)
    return altura,qtInternos

n = int(input())
for i in range(n):
    a = int(input())
    
    altura,qt = alt(a)
    
    if i == n-1:
        print(f'{qt} {altura}', end="")
    else:
        print(f'{qt} {altura}')