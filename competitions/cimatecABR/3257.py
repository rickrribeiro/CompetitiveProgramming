n = int(input())
nums = []

m = input()
nums = list(map(int, m.split()))

nums.sort(reverse=True)

lastDay = 1
for i in range(n):
    if nums[i]+i+1 > lastDay:
        lastDay = nums[i]+i+1
print(lastDay+1)