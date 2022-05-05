n = int(input())

a100 = int(n/100)
n = n%100
a50 = int(n/50)
n = n%50
a20 = int(n/20)
n = n%20
a10 = int(n/10)
n = n%10
a5 = int(n/5)
n = n%5
a2 = int(n/2)
n = n%2
a1 = int(n/1)
n = n%1

print(f'{a100} nota(s) de R$ 100')
print(f'{a50} nota(s) de R$ 50')
print(f'{a20} nota(s) de R$ 20')
print(f'{a10} nota(s) de R$ 10')
print(f'{a5} nota(s) de R$ 5')
print(f'{a2} nota(s) de R$ 2')
print(f'{a1} nota(s) de R$ 1', end="")