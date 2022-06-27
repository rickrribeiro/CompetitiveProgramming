def operation(a,b,operator):
    if operator == '+':
        return a+b
    if operator == '-':
        return a-b
    if operator == '*':
        return a*b
    if operator == '/':
        if b == 0:
            print(f'erro', end="")
            exit(1)
        return a/b

a= int(input())
b= input()
c= int(input())
d= input()
e= int(input())

resp = 0
if b == '*' or b == '/':
    resp = operation(a,c,b)
    resp = operation(resp,e,d)
else:
    if d == '*' or d =='/':
        resp = operation(c,e,d)
        resp = operation(a,resp,b)
    else:
        resp = operation(a,c,b)
        resp = operation(resp,e,d)

print(f'{int(resp)}', end="")