n = int(input())
portas = [ 'A' for x in range(n)]
aux  = 0
for i in range(2,n+1):
    for j in range(2,n+1):
        if j%i == 0:
            if portas[aux] == 'A':
                portas[aux] = 'F'
            else:
                portas[aux] = 'A'
        aux+=1
    aux = 0
print(portas.count('A'))