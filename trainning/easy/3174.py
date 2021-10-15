n = input()


arr = {
    'bonecos':0,
    'arquitetos':0,
    'musicos':0,
    'desenhistas':0
}
for i in range(int(n)):
    aux = input()
    aux = aux.split(' ')
    arr[aux[1]] += int(aux[2])


total = int(arr['bonecos']/8)+int(arr['arquitetos']/4)+int(arr['musicos']/6)+int(arr['desenhistas']/12)
print(total)