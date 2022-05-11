# def diff(a,b):
#     if a>b:
#         return a-b
#     else:
#         return b-a
import re

# n = int(input())

# for i in range(n):
#     M = input()
#     cnt =0
#     res ="N" 
#     a = [m.start() for m in re.finditer("AUG", M)]
#     b = [m.start() for m in re.finditer("UUC", M)]
#     b+=[m.start() for m in re.finditer("UUU", M)]
#     c =  [m.start() for m in re.finditer("AUA", M)]
#     c+=[m.start() for m in re.finditer("AUC", M)]
#     c+=[m.start() for m in re.finditer("AUU", M)]
    
#     for x in a:
#         for y in b:
#             for z in c:
#                 if diff(x,y) > 2 and diff(x,z) >2 and diff(y,z)>2:
#                     res="S"
#                     break
#             if res=="S":
#                 break
#         if res=="S":
#                 break

#     if i == n-1:
#         print(res, end="")
#     else:
#         print(res)
n = int(input())

for i in range(n):
    M = input()
    cnt =0
    res ="N" 
    a = [m.start() for m in re.finditer("AUG", M)]
    b = [m.start() for m in re.finditer("UUC", M)]
    b+=[m.start() for m in re.finditer("UUU", M)]
    c =  [m.start() for m in re.finditer("AUA", M)]
    c+=[m.start() for m in re.finditer("AUC", M)]
    c+=[m.start() for m in re.finditer("AUU", M)]
    
    if len(a)> 0 and len(b)>0 and len(c)>0:

        if a[0] < b[0] and b[0] < c[0]:
            res="S"

   
    print(res)