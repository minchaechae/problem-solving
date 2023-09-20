n, m = map(int, input().split())

A = [i for i in range(1, n+1)]

for _ in range(m):
    i, j = map(lambda x: int(x)-1, input().split())
    A[i], A[j] = A[j], A[i]

print(*A)
