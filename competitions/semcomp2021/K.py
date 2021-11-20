from sys import stdin, stdout
n = int(input())
 
# input the array

while(n>0):
    n-=1
    l,r,k = map(int,input().split())
    qntdQM = 0
    if(k>r):
        stdout.write(str(0)+'\n')
    elif(l>=k):
        pQM = l%k
        if pQM != 0:
            ini = (l-pQM) + k
        else:
            ini = l
        qntdQM = 1+((r-ini)//k)
        stdout.write(str(qntdQM)+'\n')
    elif(k>l):
        ini = k
        qntdQM = (r//k)
        stdout.write(str(qntdQM)+'\n')