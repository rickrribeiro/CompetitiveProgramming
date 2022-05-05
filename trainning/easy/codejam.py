n = int(input())

for i in range(n):
    num = input()
    a=0
    b=0
    for j in num:
        a*=10
        b*=10
        if int(j) ==4:
            b+=3
            a+=1
        else:
            a+= int(j)
    print(f'Case #{i+1}: {a} {b}')