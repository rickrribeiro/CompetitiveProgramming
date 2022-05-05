n = int(input())

for i in range(n):
    n = int(input())
    arr = [int(x) for x in input().split()]

    count = 0
    last = -1
    while 1:
        #print(f'{last} {arr[0]} {arr[len(arr)-1]}')
        if len(arr)==1:
            if arr[0]>= last:
                count +=1
            break
        elif arr[0] < last and arr[len(arr)-1] < last:
            break
        elif arr[0] <= arr[len(arr)-1] and arr[0]>= last:
            last = arr[0]
            arr = arr[1:]
            count += 1
        elif arr[0] >= arr[len(arr)-1] and arr[len(arr)-1]< last:
            last = arr[0]
            arr = arr[1:]
            count += 1
        else:
            last = arr[len(arr)-1]
            arr = arr[:-1]
            count += 1


    print(f'Case #{i+1}: {count}')
