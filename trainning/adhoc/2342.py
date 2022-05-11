a = input()
b = input()

b.replace(" ","")

if "+" in b:
    b = b.split("+")
    b = int(b[0]) + int(b[1])
    
else:
    b= b.split("*")
    b = int(b[0]) * int(b[1])

if b > int(a):
    print("OVERFLOW")
else:
    print("OK")