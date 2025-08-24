num = float(input())

if int(num) == num:
    print(f"int {int(num)}")
else:
    print(f"float {int(num)} {num - int(num):.3f}")
