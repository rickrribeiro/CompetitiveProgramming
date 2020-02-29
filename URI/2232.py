qt = int(input())
total = 0
for i in range(qt):
	num = int(input())
	for j in range(num):
		aux = pow(2,j)
		total+= aux
	print(total)
	total=0
