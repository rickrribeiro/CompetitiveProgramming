pokemons = {}

x,y = map(int, input().split())

for i in range(x):
    linhas = list(map(int, input().split()))
    for poke in linhas:
      if poke != 0:
        if poke in pokemons.keys():
          pokemons[poke] += 1
        else:
          pokemons[poke] = 1


p = int(input())
print(f'Ash pegou {pokemons[p]} pokemon')      
