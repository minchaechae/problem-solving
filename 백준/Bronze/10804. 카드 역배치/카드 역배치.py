A = list(range(1,21))

for _ in range(10):
    a, b = map(int, input().split())
    A[a-1:b] = A[a-1:b][::-1]

print(*A)