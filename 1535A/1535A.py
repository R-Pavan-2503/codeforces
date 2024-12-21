n = int(input())

for i in range(n):
    arr = list(map(int, input().split()))
    w1 = max(arr[0] , arr[1])
    w2 = max(arr[2] , arr[3])
    arr.sort()
    if w1 in arr[2:] and w2 in arr[2:]:
        print("YES")
    else:
        print("NO")