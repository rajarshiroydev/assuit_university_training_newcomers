character = input()

if ord(character) >= 48 and ord(character) <= 64:
    print("IS DIGIT")
elif ord(character) >= 65 and ord(character) <= 96:
    print("ALPHA")
    print("IS CAPITAL")
else:
    print("ALPHA")
    print("IS SMALL")