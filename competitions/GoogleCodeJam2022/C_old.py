n = int(input())

for i in range(n):
    m = int(input())
    lis = list(map(int, input().split(" ")))
    lis.sort()
    tot = 0
    aux = 0
    cnt = 1
    for j in range(m):
        if cnt <= lis[j]:
            aux+=1
            cnt+=1
        else:
            aux=1
            cnt=1 
        if aux>tot:
            tot=aux
    print(f'Case #{i+1}: {tot}')