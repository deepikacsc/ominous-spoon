exp = input("Expression: ").split(" ")
x,y,z = exp
x1 = float(x)
x2 = float(z)

if y == "+":
    print(round(x1+x2, 1))
elif y == "-":
    print(round(x1-x2, 1))
elif y == "*":
    print(round(x1*x2, 1))
elif y == "/":
    print(round(x1/x2, 1))
