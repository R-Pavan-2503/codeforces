t = int(input())
for _ in range(t):
    x, y, k = map(int, input().split())
    x_moves = (x + k - 1) // k
    y_moves = (y + k - 1) // k
    total_moves = x_moves + y_moves
    print(total_moves * 2 - (total_moves % 2 == 1))
