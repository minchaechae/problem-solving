L, P = map(int, input().split())
A = list(map(int, input().split()))

for a in A:
    print(a-L*P, end=' ')