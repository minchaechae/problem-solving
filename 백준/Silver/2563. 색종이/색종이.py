n = int(input())
A = [[0]*100 for _ in range(100)]

for _ in range(n):
    y, x = map(int, input().split())
    for i in range(x, x+10):
        for j in range(y, y+10):
            A[i][j] = 1

result = 0
for i in range(100):
    result += A[i].count(1)

print(result)