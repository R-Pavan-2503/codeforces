n , x = map(int , input().split())
dis = 0
for _ in range(n):
    sym , pack = map(str, input().split())
    pack = int(pack)
    if sym == '+':
        x += pack
    else:
        if x >= pack: 
            x-= pack
        else:
            dis+=1

print(x , dis)