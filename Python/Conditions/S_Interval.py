num = float(input())

# [0,25], (25,50], (50,75], (75,100]

if num >= 0 and num <= 25:
    print("Interval [0,25]")
elif num > 25 and num <= 50:
    print("Interval (25,50]")
elif num > 50 and num <= 75:
    print("Interval (50,75]")
elif num > 75 and num <= 100:
    print("Interval (75,100]")
else:
    print("Out of Intervals")
