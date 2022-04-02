n = int(input())

for i in range(n):
    m = int(input())
    lis = list(map(int, input().split(" ")))
    lis.sort()
    tot =  0
    for j in range(m):
        aux = 0
        cnt = 1
        for k in range(m-j):
            if cnt <= lis[k+j]:
                aux+=1
                cnt+=1
            else:
                aux=0
                cnt=1
            if aux>tot:
                tot=aux
    print(f'Case #{i+1}: {tot}')