from math import sqrt, ceil
a, b, c, d = [int(x) for x in input().split()]

for i in range(a, ceil(sqrt(c)+c+1), a):
    if i%b!=0 and c%i==0 and d%i!=0:
        print(i)
        exit(1)
        
print(-1)