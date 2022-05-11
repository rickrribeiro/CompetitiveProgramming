while 1:
    n = int(input())
    if n ==0:
        break
    strd = "1"
    for i in range (2, 25000000,1):
        pow = i*i
        if pow <= n:
            strd+=f' {str(pow)}'
        else:
            break
    print(strd)
