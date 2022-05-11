#3 impressoras, 4 cores cada. Uma cor tem 4 inteiros mostrando como faz (tipo RGB)

n = int(input())

for i in range(n):
    a= 99999999
    b= 99999999
    c= 99999999
    d= 99999999
    for j in range(3):
        aux1,aux2,aux3,aux4 = list(map(int, input().split(" ")))
        a = a if aux1 > a else aux1
        b = b if aux2 > b else aux2
        c = c if aux3 > c else aux3
        d = d if aux4 > d else aux4
    output = ""
    if (a+b+c+d)<1000000:
        output = f'Case #{i+1}: IMPOSSIBLE'
    else:
        output = f'Case #{i+1}:'
        aux = 1000000
        if a > aux:
            output+=f' {aux}'
            aux = 0
        else:
            output+=f' {a}'
            aux -= a
        if b > aux:
            output+=f' {aux}'
            aux = 0
        else:
            output+=f' {b}'
            aux -= b
        if c > aux:
            output+=f' {aux}'
            aux = 0
        else:
            output+=f' {c}'
            aux -= c
        if d > aux:
            output+=f' {aux}'
            aux = 0
        else:
            output+=f' {d}'
            aux -= d
    print(output)

