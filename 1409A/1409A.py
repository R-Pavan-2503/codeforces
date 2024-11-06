n  = int(input())
res=[]
for i in range(n):
    a, b = map(int, input().split())
    diff = abs(a -b)
    if diff % 10 ==0:
        res.append((diff//10))
    else:
        res.append(diff//10 + 1)

for i in res:
    print(i)
