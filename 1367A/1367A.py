t = int(input())
result=[]
for _ in range(t):
    n=input().strip()
    a=n[0]
    for i in range(1 , len(n) , 2):
        a+=n[i]
    result.append(a)

print("\n".join(result))