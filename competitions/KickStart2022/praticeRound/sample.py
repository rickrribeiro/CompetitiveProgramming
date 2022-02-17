n = int(input())
for i in range(n):
    arr = [int(x) for x in input().split()]
    tot=0
    arrCandy = [int(x) for x in input().split()]
    for candy in arrCandy:
        tot+=candy
    print(f"Case #{i+1}: {tot%arr[1]}")
        