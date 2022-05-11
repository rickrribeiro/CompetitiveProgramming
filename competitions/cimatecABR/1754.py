import math
n = int(input())

for i in range(n):
    x,y = list(map(int, input().split()))
    if y>x:
        print(1)
    else:
        if x%y==0:
            print(math.floor(x/y))
        else:
            print(math.floor((x/y)+1))