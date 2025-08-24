nums = input().split()

floor = int(nums[0]) // int(nums[1])
ceil = (int(nums[0]) / int(nums[1])).__ceil__()
roundoff = (int(nums[0]) / int(nums[1])).__round__()

print(f"floor {nums[0]} / {nums[1]} = {floor}")
print(f"ceil {nums[0]} / {nums[1]} = {ceil}")
print(f"round {nums[0]} / {nums[1]} = {roundoff}")