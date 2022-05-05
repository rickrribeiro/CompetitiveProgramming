n = int(input())
words = []
wordsSTR = "."
for i in range(n):
    aux = input()
    words.append(aux)
    wordsSTR+=aux+"."
for word in words:
    wordsSTR = wordsSTR.replace(word[0],"")

if ".." in wordsSTR:
    print("Y")
else:
    print("N")

