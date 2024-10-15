import math
t = int(input())

while(t > 0):
    k = int(input())
    l = k
    ans = r = 2 * k
    while(l <= r):
        mid = (l + r) // 2
        on = mid - math.isqrt(mid)
        if on < k:
            l = mid + 1
        else:
            ans = mid 
            r = mid - 1
    print(ans)
    t -= 1
