te = int(input())
res = []

for _ in range(te):
    m, a, b, c = map(int, input().split())
    
    row1 = min(a, m)
    remaining = c - min(c, m - row1)
    row1 += min(c, m - row1)
    
    row2 = min(b, m)
    row2 += min(remaining, m - row2)
    
    res.append(row1 + row2)

print('\n'.join(map(str, res)))
