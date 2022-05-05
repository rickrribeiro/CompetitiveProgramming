def resolv(arrs, sett):
    print(sett)
    print(arrs)

n = int(input())

for i in range(n):
    m = int(input())
    arr = [] #+1 na resposta
    for j in range(m):
        arr.append([])
        line = list(map(int, input().split(' ')))
        for k in range(len(line)):#cada num na linha
            if line[k]==1:#main site
                arr[j].append(k)
    resolv(arr, range(m))
    print(arr)
    sett = set(arr)
    if i == n-1:   
        if len(sett) == m: #botar se todas conectarem
            print(f'Test case {i+1}: Fully working network!!', end="")
        else:
            resp =""
            for a in range(m):#pog pra formatar
                
                if a == 0:
                    continue
                if a not in sett:
                    resp+=f' {a}'
            
            print(f'Test case {i+1}:{resp}', end="")
    else:
        if len(sett) == m: #botar se todas conectarem
            print(f'Test case {i+1}: Fully working network!!')
        else:
            resp =""
            for a in range(m):#pog pra formatar
                if a == 0:
                    continue
                if a not in sett:
                    resp+=f' {a}'
            print(f'Test case {i+1}:{resp}')