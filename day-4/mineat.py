import math
def is_ok(arr, num, h):
    sm = 0
    for v in arr:sm += math.ceil(v / num)
    return sm <= h
for _ in range(int(input())):
    n,h = map(int, input().split())
    arr = [int(x) for x in input().split()]
    lo = 1
    hi = max(arr) + 1
    while lo <= hi:
        mid = (lo + hi) // 2
        if not is_ok(arr, mid, h):
            lo = mid + 1
        else:
            hi = mid - 1
            ans = mid
    print(ans)
