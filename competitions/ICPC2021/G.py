import math
n = int(input())
str=""
a=False
if n%2==0:
    for i in range(int(n/2)):
        str+="AB"
    print(str)
else:
    for count in range(3,int(math.sqrt(n)+1)):
        if (n % count == 0):
            a=True
            break
    if a==False:
        print("IMPOSSIBLE")
    else:
        str+="AA"
        for i in range( int((n/2))-1):
            str+="AB"
        print(str)