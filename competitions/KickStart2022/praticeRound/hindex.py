#TLE
n = int(input())
for i in range(n):
    dp = {}
    numPapers = int(input())
    arrCitations = [int(x) for x in input().split()]
    tot=0
    output = f"Case #{i+1}:"
    for y in range(numPapers):
       
        for j in range(arrCitations[y]+1):
            if j in dp:
                dp[j] += 1
            else:
                dp[j] = 1
            
        if dp[tot+1] > tot and arrCitations[y] > tot:
            tot+=1
        output+=f" {tot}"
    print(output)    
        

#         function dedupe(list) {
#     keys = {}
#     list = list.filter((el)=>{
#         if(keys[el.id]==undefined){
#             keys[el.id]=el
#             return el
#         }else{
#             return {...keys[el.id], el}
#         }
#     })
#     console.log(list)
#   return list;
# }

# module.exports = dedupe;