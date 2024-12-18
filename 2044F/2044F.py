import time

def solve():

    n, m, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    sum_a = sum(a)
    sum_b = sum(b)
    
    total_beauty = sum_a * sum_b
    
    row_sums = [a[i] * sum_b for i in range(n)]
    col_sums = [b[j] * sum_a for j in range(m)]
    
    for _ in range(q):
        x = int(input())
        
        found = False
        
        for r in range(n):
            for c in range(m):
                beauty_after_zeroing = total_beauty - row_sums[r] - col_sums[c] + a[r] * b[c]
                if beauty_after_zeroing == x:
                    found = True
                    break
            if found:
                break
        
        if found:
            print("YES")
        else:
            print("NO")


solve()
