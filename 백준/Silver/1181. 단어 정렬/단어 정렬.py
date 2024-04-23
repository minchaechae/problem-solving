n = int(input())
A = [input() for _ in range(n)]
A = list(set(A))
sortedA = sorted(A, key=lambda x : (len(x),x))

for a in sortedA:
    print(a)