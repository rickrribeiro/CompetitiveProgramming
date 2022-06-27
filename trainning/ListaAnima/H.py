n = int(input())

for i in range(n):
    line = list(map(int, input().split(' ')))
    
    sum=""
    if(line[0]+line[1]<=line[2]):
        sum="CABE!"
    else:
        sum="NAO CABE!"
    if(i == n-1):
        print(f'{sum}', end="")
    else:
        print(sum)