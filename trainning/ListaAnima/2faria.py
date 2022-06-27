n = int(input())
s = int(input())

arrays = []

for i in range(4):
  aux = []
  for j in range(4):
    v = (j+1)*n+(i*4*n)
    aux.append(v)
  arrays.append(aux)

for i in range(s):
  a = int(input())
  b = int(input())
  c = int(input())
  arrays[a][b] = c
for i in range(4):
  print(arrays[i])