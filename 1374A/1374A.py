t = int(input())

results = []
for _ in range(t):
    x, y, n = map(int, input().split())
    k = n - (n % x) + y
    if k > n:
        k -= x
    results.append(k)
for i in results:
    print(i)

