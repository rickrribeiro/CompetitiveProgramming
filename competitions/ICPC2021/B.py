a,n = map(int,input().split())

s=input()
s+=s
min = -1
for i in range(n):
    d=input()
    while(len(d)>len(s)):
        s+=s
    s+=s
    if d in s:
        if min == -1 or len(d)<min:
            min = len(d)
        
if min == -1:
    print(0)
else:
    print(min)