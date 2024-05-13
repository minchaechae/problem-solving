n = int(input())
score = 0
total = 0

A = list(map(int, input().split()))
for a in A:
    score = score+1 if a == 1 else 0
    total += score

print(total)