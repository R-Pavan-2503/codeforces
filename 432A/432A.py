n , k = map(int , input().split())
a = list(map(int , input().split()))

count = 0

for i in a:
    if 5-i >= k :
        count+=1
print(count//3) 