def alt(m):
    tamanho = 3
    quantidadeAlturaAtual = 2
    altura = 1
    qtInternos = 1
    while m > tamanho:
        qtInternos = tamanho
        tamanho = tamanho+ quantidadeAlturaAtual*2
        quantidadeAlturaAtual = quantidadeAlturaAtual*2
        altura +=1
    n = (m+1)/2
    qtInternos = m - int(n)
    return altura,qtInternos

n = int(input())
for i in range(n):
    a = int(input())
    
    altura,qt = alt(a)
    
    if i == n-1:
        print(f'{qt} {altura}', end="")
    else:
        print(f'{qt} {altura}')