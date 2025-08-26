n, m, k = map(int, input().split())

if n == 0 or k == 0:
    print("0")
else:
    minimumOfAllItems = min(n, m, k)
    n = n - minimumOfAllItems
    m = m - minimumOfAllItems
    k = k - minimumOfAllItems
    nextMinimumOfAllItems = min(n // 2, k)
    print(minimumOfAllItems + nextMinimumOfAllItems)

'''
- we first check if either n or k is 0 because without them a doll cannot be made
- then we subtract the lower item from all the items as that will definitely be used up
in making the doll
- now we can only make dolls with the minimum of n/2 or k
'''