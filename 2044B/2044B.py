te = int(input())

res = []
for _ in range(te):
    a = input()
    b = ''.join(
        'q' if c == 'p' else
        'p' if c == 'q' else
        'w' 
        for c in reversed(a)
    )
    res.append(b)

for r in res:
    print(r)
