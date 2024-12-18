str_1 = input().strip()
res= ""
for i in str_1:
    if i not in "aeiouAEIOU":
        res+='.'
        res+=i.lower()
print(res)