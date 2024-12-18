MAX_N = 200000
freq = [0] * (MAX_N + 1)

def process_test_case(n):
    a = list(map(int, input().split()))
    b = [0] * n
    global freq
    freq = [0] * (n + 1)

    for i in range(n):
        b[i] = a[i]
        freq[b[i]] += 1

    print(" ".join(map(str, b)))

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        process_test_case(n)

if __name__ == "__main__":
    solve()
