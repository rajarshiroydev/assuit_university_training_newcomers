expression = input()

if "+" in expression:
    index = expression.index("+")
    print(int(expression[:index]) + int(expression[index + 1 :]))
elif "-" in expression:
    index = expression.index("-")
    print(int(expression[:index]) - int(expression[index + 1 :]))
elif "*" in expression:
    index = expression.index("*")
    print(int(expression[:index]) * int(expression[index + 1 :]))
elif "/" in expression:
    index = expression.index("/")
    print(int(expression[:index]) // int(expression[index + 1 :]))
