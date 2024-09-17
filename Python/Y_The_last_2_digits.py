data = input().split()

a = int(data[0])
b = int(data[1])
c = int(data[2])
d = int(data[3])

prod = a * b * c * d

prod = str(prod)

print(f'{prod[-2]}{prod[-1]}')