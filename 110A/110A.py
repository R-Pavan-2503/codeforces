n = input()
c = 0
for i in n:
    if i == '4' or i == '7': c += 1
print("YES") if c == 4 or c == 7 else print("NO")
