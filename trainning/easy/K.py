n = int(input())

for i in range(n):
    a,b = map(int, input().split())
    res = a+b
    if i == n-1:
        print(res, end="")
    else:
        print(res)