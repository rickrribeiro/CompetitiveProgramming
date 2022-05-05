# def fat(n):
#     if n <=1:
#         return 1
#     else:
#         return n*fat(n-1)
dp = "0.1."
def getDP(n, ct):
    global dp
    at= int(dp.split('.')[ct-1])
  
    for i in range(ct,n+1,1):
    #for i in range(2,11,1):
        at = (at*i)%1000000009
        dp+=f'{at}.'

def fat(n):
    b = 1
    for i in range(2,n+1,1):
        b= (b*i)
    return b

while 1:
    n = int(input())
    if n==0:
        break
    #resp = (fat(n)/(fat(n-3)))
    #resp = (fat(n)/(fat(3)*fat(n-3)))
    #resp = ((fat(n)%1000000009)/(fat(3)))
    #print(dp[n])
    #print(dp.split('.'))
    ct = dp.count('.')
    if(ct<=n):
        getDP(n, ct)
   # print(dp)
    resp = ((int(dp.split('.')[n]))/(fat(3)))
   # print(fat(10)/fat(3))
    #print(fat(15)/fat(3))
    print(int(resp))