n = int(input())
final_res = []
for i in range(n):
    res_val =[]
    val = int(input())
    for i in range(val):
        input_str = input().strip()
        res_val.insert(0 ,input_str.index('#')+1 )
    final_res.append(res_val)
for i in final_res:
    print(*i)