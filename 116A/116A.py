n = int(input())

max_cap = 0
cap = 0

for i in range(n):
    a, b = map(int, input().split())
    cap = (cap-a) + b
    max_cap = max(max_cap, cap)

print(max_cap)