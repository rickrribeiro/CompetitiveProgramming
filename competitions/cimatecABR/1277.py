n = int(input())

for i in range(n):
    n = int(input())
    a = input().split()
    b = input().split()
    resp = ""
    for j in range(n):
        qtAulas = len(b[j])
        presen = b[j].count('P')
        med = b[j].count('M')
        qtAulas = qtAulas - med   
        if presen < qtAulas*0.75:
            if resp == "":
                resp += a[j]
            else:
                resp +=f' {a[j]}'
    print(resp)
