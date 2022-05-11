
def solution(list, value, sum, idx, arrayindo):
  
    if(idx == len(list)):
        return 0, 0
    if sum == value:
        
        return arrayindo, 9999999999
    foiA,pog = solution(list, value, sum,idx+1, arrayindo)
    if pog==9999999999:
        return foiA, 9999999999
    
    if(foiA != 0):
      
        return foiA, 0
    
    foiB,pog = solution(list, value, sum+list[idx],idx+1,arrayindo+[list[idx]])
    if pog==9999999999:
        return foiB, 9999999999
    if(foiB != 0):
        foiB.append(list[idx])
      
        return foiB, 0
    
    return 0, 0
        

n = int(input())
for i in range(n):
 
    qt = int(input())
    if qt == -1:
        exit(1)
    tot = 0
    nums = []
    for j in range(qt):
        tot+=2*(j+1)
        nums.append(2*(j+1))
    print(str(nums).replace('[','').replace(',','').replace(']',''))
    judge_numbers = input()
    for numb in judge_numbers.split(' '):
        tot+=int(numb)
        nums.append(int(numb))
    nums.sort()
    arrQueFoi,pog = solution(nums, tot/2, 0, 0, [])
    print(arrQueFoi)