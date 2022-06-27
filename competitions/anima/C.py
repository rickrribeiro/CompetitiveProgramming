n = int(input())
for i in range(n):
    a = input()
    count = 0
    for b in a:
        if b == '(':
            count += 1
        elif b == ')':
            count -= 1

        if count < 0:
            break
    
    if i == n-1:
        if count == 0:
            print("OK", end="")
        else:
            print("NOK", end="")
    else:
        if count == 0:
            print("OK")
        else:
            print("NOK")