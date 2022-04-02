n = int(input())

for i in range(n):
    m = int(input())
    lis = list(map(int, input().split(" ")))
    lis.sort()
    lis = lis[::-1]
    tot = 0
    big = m
    for j in range(m):
        dif = (big-j) - lis[j]
        if(dif > tot):
            tot=dif
        #print(f'{dif} - {tot}')
    if m-tot < big:
        big = m-tot
    print(f'Case #{i+1}: {big}')