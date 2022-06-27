a,b = map(int, input().split())
resp=""
if a==0 and b == 0:
    resp="NO ALVO!"
if a>0 and b > 0:
    resp="R1"
if a>0 and b < 0:
    resp="R4"
if a<0 and b < 0:
    resp="R3"
if a<0 and b > 0:
    resp="R2"


print(f'{resp}', end="")

