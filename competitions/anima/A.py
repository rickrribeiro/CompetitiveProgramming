n = int(input())

arr = []
for i in range(n):
    a = input()
    arr.append(a)
arr.sort()
for i in range(n):
    if i == n-1:    
        print(f'Bem-vindo(a), {arr[i]}!!!',end ="")
    else:
        print(f'Bem-vindo(a), {arr[i]}!!!')
