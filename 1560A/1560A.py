liked_num = []
num = 1

while len(liked_num) < 1000:
    if num % 3 != 0 and num%10!=3:
        liked_num.append(num)
    num+=1

n = int(input())
l=[]
for i in range(n):
    k = int(input())
    l.append(liked_num[k-1])

print("\n".join(map(str, l)))