expression = input().split(" ")

if "<" in expression and int(expression[0]) < int(expression[-1]):
    print("Right")
elif ">" in expression and int(expression[0]) > int(expression[-1]):
    print("Right")
elif "=" in expression and int(expression[0]) == int(expression[-1]):
    print("Right")
else:
    print("Wrong")

# expression = input()

# if "<" in expression:
#     if int(expression[: expression.index("<") - 1]) < int(
#         expression[expression.index("<") + 1 :]
#     ):
#         print("Right")
