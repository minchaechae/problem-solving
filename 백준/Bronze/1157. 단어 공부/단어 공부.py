A = input().upper()
a = set(A)
na = [0] * len(a)

a = list(a)
for i in range(len(a)):
    na[i] = A.count(a[i])

if na.count(max(na)) > 1:
    print("?")
else:
    print(a[na.index(max(na))])