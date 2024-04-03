A = [list(input()) for _ in range(5)]

maxLen = 0
for i in range(5):
    if len(A[i]) > maxLen:
        maxLen = len(A[i])

for i in range(maxLen):
    for j in range(5):
        if len(A[j]) > i:
            print(A[j][i], end='')