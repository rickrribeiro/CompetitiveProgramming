n = int(input())

for i in range(n):
    m = int(input())
    arr = [] #+1 na resposta
    lines = []
    for j in range(m):
        line = list(map(int, input().split(' ')))
        lines.append(line)
        if j not in arr and j!=0:
            continue
        for k in range(len(line)):#cada num na linha
            if line[k]==1:
                arr.append(k)
    for j in range(100):#POG ABSURDO
        #print(arr)
        for u in range(m):
            if u not in arr and u!=0:
                continue
            for k in range(len(lines[u])):#cada num na linha
                if lines[u][k]==1:#main site
                    arr.append(k)
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