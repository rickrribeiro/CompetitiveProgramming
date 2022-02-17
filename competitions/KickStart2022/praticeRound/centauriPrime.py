n = int(input())
vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
for i in range(n):
    kingdom = str(input())
    last = kingdom[-1]
    ruler = ''
    if last == 'y' or last == 'Y':
        ruler = "nobody"
    elif last in vowels:
        ruler = "Alice"
    else:
        ruler= "Bob"
    print(f"Case #{i+1}: {kingdom} is ruled by {ruler}.")