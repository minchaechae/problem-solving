def isGroupWord(w):
    for i in range(len(w)-1):
        if w[i] != w[i+1]:
            if w[i] in w[i+1:]:
                return 0
    return 1

n = int(input())
count = 0
for _ in range(n):
    w = input()
    count += isGroupWord(w)

print(count)
