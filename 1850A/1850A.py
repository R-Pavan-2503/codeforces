n = int(input())
ans=[]
for i in range(n):
    a , b,  c = map(int, input().split())
    if (a+b >=10 or b+c>=10 or a+c>=10 or b+a>=10):
        ans.append("YES")
    else:
        ans.append("NO")
for i in ans:
    print(i)