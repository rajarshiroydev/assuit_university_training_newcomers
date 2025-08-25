expression = input().split(" ")

if "+" in expression:
    if int(expression[0]) + int(expression[2]) == int(expression[4]):
        print("Yes")
    else:
        print(int(expression[0]) + int(expression[2]))

elif "-" in expression:
    if int(expression[0]) - int(expression[2]) == int(expression[4]):
        print("Yes")
    else:
        print(int(expression[0]) - int(expression[2]))

elif "*" in expression:
    if int(expression[0]) * int(expression[2]) == int(expression[4]):
        print("Yes")
    else:
        print(int(expression[0]) * int(expression[2]))
