import math
#mmc = maior/mdc * menor
while 1:
    n,a,b = list(map(int, input().split()))
    if a + b + n == 0:
        break
    if b>a:
        a = a+b
        b = a-b
        a = a-b
    # z = b/a
    maior = b
    d1=a
    d2=b
    while d1%d2 != 0:
        res = d1 % d2
        d1 = d2
        d2 = res
    
    x = float(str(n/a).split('.')[0])
    y = float(str(n/b).split('.')[0])
    z = int(str((n/(a/d2*b))).split('.')[0])
    

    print(int(x+y-z))
   
   


