n = int(input())

a = list(map(int, input().split()))

maxi , mini = a[0] , a[0]
amaze = 0

for i in a[1:]:
    if i < mini:
        amaze += 1
        mini = i
    elif i > maxi:
        amaze += 1
        maxi = i

print(amaze)