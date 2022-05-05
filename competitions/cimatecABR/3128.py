a = int(input())
b = int(input())

if a >= 14 and b >= 14:
    print("YES")
elif a >= 6 and b >= 18:
    print("YES")
elif b >= 6 and a >= 18:
    print("YES")
else:
    print("NO")