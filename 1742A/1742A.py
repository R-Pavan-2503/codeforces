n = int(input())
res=[]
for i in range(n):
    a, b, c= map(int, input().split())
    if(a+b ==c or a+c==b or b+c==a):
        res.append("YES")
    else:
        res.append("NO")
for i in res:
    print(i)