import math

n, k, a = map(int, input().split())

if math.ceil((n * k) / a) != math.floor((n * k) / a):
    print("double")
elif ((n * k) / a) >= -2147483647 and ((n * k) / a) <= 2147483647:
    print("int")
else:
    print("long long")
