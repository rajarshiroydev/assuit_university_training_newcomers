odd, even = map(int, input().split())
"""
there cannot be any non-empty intervals if odd and even would be:
(0, 0), (1, 0), (0, 1), (1, 1) hence are checking the logic only
if atleast one variable is 1 and the other is greater than 1
"""
"""
for the logic, we are checking if the difference between odd and even count
is not more than 1 because there is no interval possible where there can be more
than 1 odd count for even and vice versa.
"""

"""
# Method 1
if odd >= 1 and even > 1 or odd > 1 and even >= 1:
    if (odd - even) == 1 or (odd - even) == -1 or odd == even:
        print("YES")
    else:
        print("NO")
else:
    print("NO")
"""

# Method 2
if (
    (odd == 0 and even == 0)
    or (odd == 1 and even == 0)
    or (odd == 0 and even == 1)
    or (odd == 1 and even == 1)
):
    print("NO")
else:
    if (odd - even) == 1 or (odd - even) == -1 or odd == even:
        print("YES")
    else:
        print("NO")
