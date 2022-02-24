n = int(input())

for i in range(n):
    x = int(input())
    ant=1
    qt = 0
    for j in range(x):
        qt+= ant
        ant*=2
    qt = (qt)/12000
  
    if qt<1:
        qt=0

    
    print(f'{str(qt).split(".")[0]} kg')