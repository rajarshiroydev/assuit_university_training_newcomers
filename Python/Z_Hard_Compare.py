import math

a, b, c, d = map(int, input().split())

if math.log(a**b) > math.log(c**d):
    print("YES")
else:
    print("NO")
