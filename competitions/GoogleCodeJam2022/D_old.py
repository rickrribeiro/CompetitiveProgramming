n = int(input())
dp = {}
modules = [] # factor, points_to

def resolve(idx, tam):
    global dp
    global modules
    if idx in dp:
        return dp[idx]
    if modules[idx][1] == 0:
        dp[idx] =  modules[idx][0]


for i in range(n):
    dp={}
    modules = []
    m = int(input())
    factors = list(map(int, input().split(" ")))
    points = list(map(int, input().split(" ")))
    ini = list(range(1,m+1)) ## p pegar os inicializadores
    for j in range(m):
        modules.append((factors[j], points[j], 0))
        if points[j] in ini:
            ini.remove(points[j])
    # modules.sort(key=lambda sor: sor[1])
    result = 0
    #vou no 0, do zero pego a menor das possibilidades de todos que ligam c ele p usar ele.
    for idx in ini:
        aux = resolve(0, m) # se n der, pego do ultmoi e ir ate 0
        if aux > result:
            result = aux
    
    print(f'Case #{i+1}: {result}')