def count_pairs(t, test_cases):
    results = []

    for k, l1, r1, l2, r2 in test_cases:
        count = 0
        power = 1  
        
        while power <= r2:
            min_x = max(l1, (l2 + power - 1) // power) 
            max_x = min(r1, r2 // power)  
            
            if min_x <= max_x: 
                count += (max_x - min_x + 1)
            
            if power > r2 // k:
                break
            power *= k
        
        results.append(count)
    
    return results


t = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(t)]

results = count_pairs(t, test_cases)
print('\n'.join(map(str, results)))
