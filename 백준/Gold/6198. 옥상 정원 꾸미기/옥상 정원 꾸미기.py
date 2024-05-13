n = int(input())

s = []
ans = 0
for _ in range(n):
    h = int(input())
    
    while s and s[-1] <= h:
        s.pop()
        
    ans += len(s)
    s.append(h)

print(ans)     