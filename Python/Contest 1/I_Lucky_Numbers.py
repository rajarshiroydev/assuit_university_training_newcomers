num = int(input())

ones = num % 10
num = num // 10
tens = num % 10

if ones % tens == 0 or tens % ones == 0:
    print("YES")
else:
    print("NO")
