char = input()

charAscii = ord(char)

if char != "z":
    nextChar = charAscii + 1
    print(chr(nextChar))
else:
    print("a")
