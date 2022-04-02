
n = int(input())
modules = [] 

def getAllPointers(idx):
    global modules
    vet = []
    for m in range(len(modules)):
        if(modules[m][1]-1 == idx):
            vet.append(m)
    return vet
    
def resolve(idx): 
    global modules
    pointers = getAllPointers(idx)
    if pointers == []:
        return modules[idx][0], 0
    menor = 999999999999999
    sum = 0
    for p in pointers:
        men=0
        soma=0
        try:
            men, soma = resolve(p)
        except:
            men=0
            soma=0
        sum += soma+men
        if men < menor:
            menor = men
    res= max(modules[idx][0], menor), sum-menor

    return res


for i in range(n):
    modules = []
    m = int(input())
    factors = list(map(int, input().split(" ")))
    points = list(map(int, input().split(" ")))
    ini = []
    for j in range(m):
        modules.append((factors[j], points[j]))
        if points[j] == 0:
            ini.append(j)
    result = 0
    for idx in ini:
        a,b = resolve(idx)
        result += a+b
    
    print(f'Case #{i+1}: {result}')
