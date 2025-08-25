l1, r1, l2, r2 = map(int, input().split())

leftboundary = max(l1, l2) # 15
rightboundary = min(r1, r2) # 5

if leftboundary <= rightboundary:
    print(leftboundary, rightboundary)
else:
    print(-1)
