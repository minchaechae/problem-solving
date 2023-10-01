answer = [1, 1, 2, 2, 2, 8]
chess = list(map(int, input().split()))

print(*[a-c for a, c in zip(answer, chess)])