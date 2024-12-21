t = int(input())  
results = []

for _ in range(t):
    a, b = map(int, input().split())
    total_sum = a + 2 * b

    if total_sum % 2 != 0:
        results.append("NO")
    else:
        if b % 2 != 0 and a == 0:
            results.append("NO")
        else:
            results.append("YES")

print("\n".join(results))
