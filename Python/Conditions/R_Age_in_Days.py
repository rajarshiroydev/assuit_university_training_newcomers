totaldays = int(input())

years = totaldays // 365
months = 0
days = 0

months = (totaldays - (years * 365)) // 30

if (years * 365) + (months * 30) != totaldays:
    days = totaldays - ((years * 365) + (months * 30))

print(f"{years} years")
print(f"{months} months")
print(f"{days} days")
