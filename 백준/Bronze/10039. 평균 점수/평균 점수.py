nsum = 0
for _ in range(5):
    n = int(input())
    nsum = nsum+n if n >= 40 else nsum+40
print(nsum//5)