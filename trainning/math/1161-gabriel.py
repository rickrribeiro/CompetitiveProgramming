try:
    while True:
        txt = input().split(' ')
        M = int(txt[0])
        N = int(txt[1])
        if M == 0:
            fatM = 1
        else:
            fatM = 1
            while(M > 1): 
                fatM *= M 
                M -= 1

        if N == 0:
            fatN = 1
        else:
            fatN = 1
            while(N > 1): 
                fatN *= N 
                N -= 1


        fatT = fatM + fatN
        print(fatT)
except:
    pass