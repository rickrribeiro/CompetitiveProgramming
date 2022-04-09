n =int(input())

for i in range(n):
    a = input()
    aux = ""
    qr=0
    for j in range(len(a)-1):
        aux+=a[j]
        if a[j+1]>a[j]:
            aux+=a[j]
            for k in range(qr):
                aux+=a[j]
            qr=0
        elif a[j+1]==a[j]:
            qr+=1
        else:
            qr=0
        
    aux += a[len(a)-1]
    print(f'Case #{i+1}: {aux}')