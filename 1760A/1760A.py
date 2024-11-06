n = int(input())
res=[]
for i in range(n):
    num = list(map(int, input().split()))
    num.sort()
    res.append(num[1])
for i in res:
    print(i)