# 45min
n = int(input())

for i in range(n):
  t= input()
  numstr = input()
  aux=1
  while(aux==1):
    aux=0
    if("01" in numstr):
      numstr = numstr.replace("01","2")
      aux=1
    if("12" in numstr):
      numstr = numstr.replace("12","3")
      aux=1
    if("23" in numstr):
      numstr = numstr.replace("23","4")
      aux=1
    if("34" in numstr):
      numstr = numstr.replace("34","5")
      aux=1
    if("45" in numstr):
      numstr = numstr.replace("45","6")
      aux=1
    if("56" in numstr):
      numstr = numstr.replace("56","7")
      aux=1
    if("67" in numstr):
      numstr = numstr.replace("67","8")
      aux=1
    if("78" in numstr):
      numstr = numstr.replace("78","9")
      aux=1
    if("89" in numstr):
      numstr = numstr.replace("89","0")
      aux=1
    if("90" in numstr):
      numstr = numstr.replace("90","1")
      aux=1
  print("Case #"+str(i+1)+": "+numstr)