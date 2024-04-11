from itertools import combinations

A = [int(input()) for _ in range(9)]
A.sort()

B = []
for c in list(combinations(A, 2)):
    if sum(c) == sum(A)-100:
        B.append(c)

for a in A:
    if a not in B[0]:
        print(a)