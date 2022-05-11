n = int(input())

for i in range(n):
    print(f'Case #{i+1}:')
    x,y = list(map(int, input().split(" ")))
    ini = "+"
    sec = "|"
    for j in range(y):
        ini+="-+"
        sec+=".|"
    print(f'..{ini[2:]}')
    print(f'..{sec[2:]}')
    for j in range(x-1):
        print(ini)
        print(sec)
    print(ini)