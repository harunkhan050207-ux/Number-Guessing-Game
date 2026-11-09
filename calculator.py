a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

op = input("Enter operator (+, -, *, /): ")

if op == "+":
    print(a + b)

elif op == "-":
    print(a - b)

elif op == "*":
    print(a * b)

elif op == "/":
    if b != 0:
        print(a / b)
    else:
        print("Cannot divide by zero")

else:
    print("Invalid operator")