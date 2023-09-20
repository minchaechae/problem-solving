n, m = map(int, input().split())

A = [0] * n

for i in range(m):
    i, j, k = map(int, input().split())
    for e in range(i-1, j):
        A[e] = k

for e in A:
    print(e, end=' ')
