discountPercentage, discountedPrice = map(int, input().split())

totalPrice = (discountedPrice * 100) / (100 - discountPercentage)
print(f"{totalPrice:.2f}")
