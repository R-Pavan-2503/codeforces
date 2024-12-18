n = int(input())
a = list(map(int, input().split()))
maxi , mini = 0,0
steps = 0
for i in range(n):
    if a[i] > a[maxi]:
        maxi = i
    elif a[i] <= a[mini]:
        mini = i

if maxi > mini :
    steps = (maxi) + (n - mini - 1) - 1
else:
    steps = (maxi) + (n - mini - 1) 

print(steps)