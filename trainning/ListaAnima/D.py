a,b,c = map(int, input().split())
if a>b and a>c:
    print(a, end="")
if b>a and b>c:
    print(b, end="")
else:
    print(c, end="")