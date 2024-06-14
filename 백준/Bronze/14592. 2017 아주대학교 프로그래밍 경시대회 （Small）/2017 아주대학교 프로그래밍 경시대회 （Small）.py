A = [list(map(int, input().split())) for _ in range(int(input()))]
sortedA = sorted(A, key=lambda x : (-x[0], x[1], x[2]))

print(A.index(sortedA[0])+1)