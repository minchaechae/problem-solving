A = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

w = input()
count = 0
for a in A:
    if a in w:
        count += w.count(a)
        w = w.replace(a, ' ')

result = count + len(w) - w.count(' ')
print(result)