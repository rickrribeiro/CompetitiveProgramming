n = int(input())
while(n>0):
    n-=1
    nums = int(input())
    seq = list(map(int,input().split()))
    ordem = sorted(seq)
    if ordem == seq:
        print("Correto")
    else:
        print("Incorreto")