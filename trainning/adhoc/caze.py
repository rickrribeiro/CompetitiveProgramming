import math
#----------Programa de Cadastro de Asteroides---------#
print('Bem vindo ao programa NASA para registro de asteroides em observação, favor informar o o que deseja fazer')
print('1 - Adicionar novo asteroide à lista de observação')
print('2 - Imprimir a lista de asteroides cadastrados')
print('3 - Imprimir a distancia média entre todos os asteroides registrados\n')
N = int(input())
#lista e dict com 2 asteroides cadastrados para teste da funcao 3
listaAsteroides = []
#funcao de media entre as distancias dos pontos dos asteroides
if N == 3:
    for i in listaAsteroides[i]:
            i += 0
            total = (pontoA+pontoB+pontoC+pontoD+pontoE)/5
    print(total, total)
#estrutura de cadastro de asteroides e suas 5 posicoes relativas em distancia
while N == 1:
    dicAsteroides = {}
    print('Informe o nome do asteroide para adicionar à lista')
    nome = str(input())
    dicAsteroides['nome'] = nome
    print('Digite as ultimas 5 posicoes, em numeros inteiros, do', nome)
    print('Posicao 1')
    pontoA = int(input())
    dicAsteroides['pontoA'] = pontoA
    print('Posicao 2')
    pontoB = int(input())
    dicAsteroides['pontoB'] = pontoB
    print('Posicao 3')
    pontoC = int(input())
    dicAsteroides['pontoC'] = pontoC
    print('Posicao 4')
    pontoD = int(input())
    dicAsteroides['pontoD'] = pontoD
    print('Posicao 5')
    pontoE = int(input())
    dicAsteroides['pontoE'] = pontoE
    listaAsteroides.append(dicAsteroides)
    print(listaAsteroides)
    print('Asteroide cadastrado com sucesso.\n')
    print('Gostaria de adicionar outro asteroide ou voltar ou voltar ao menu anterior? Digite 1 para sim e 2 para voltar:')
#enviando o input pro loop caso queira add novo asteroide
    X = int(input())
    if X == 1:
        X = N
    #retorno para o menu inicial
    if X == 2:
        print('1 - Adicionar novo asteroide à lista de observação')
        print('2 - Imprimir a lista de asteroides cadastrados')
        print('3 - Imprimir a distancia média entre todos os asteroides registrados\n')
        Y = int(input())
        if Y == 2:
            print(listaAsteroides)
        if Y == 3:
            for i in listaAsteroides[i]:
                i += 0
                total = (pontoA+pontoB+pontoC+pontoD+pontoE)/5
            print(total, total)