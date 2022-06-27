n = int(input())

for i in range(n):
    line = list(map(int, input().split(';')))
    
    sum =0
    for l in line:
        sum+=l
    if(i == n-1):
        print(f'{sum}', end="")
    else:
        print(sum)