from sys import stdin
import fractions
import functools
for line in stdin:
	inp = list(map(int,line.split())) #python 3 has to be list(map(...))
	inp.sort()
	for i in range(len(inp)):
		inp[i] *= inp[i]
		

	if inp[2] != inp[1]+inp[0]:
		print("tripla")
	else:
		if functools.reduce(fractions.gcd,inp) == 1:
			print("tripla pitagorica primitiva")
		else:
			print("tripla pitagorica")
	
	
	
	
