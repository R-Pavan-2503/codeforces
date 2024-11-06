n = int(input())
x=[]
for i in range(n):
    a , b, c = map(int , input().split())
    if a < b and b < c: x.append("STAIR")
    elif a <b and b > c : x.append("PEAK")
    else: x.append("NONE")
for i in x:
    print(i)