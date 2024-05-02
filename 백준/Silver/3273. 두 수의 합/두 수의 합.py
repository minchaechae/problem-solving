n = int(input())
nums = set(map(int, input().split()))
x = int(input())

ans = 0
for num in nums:
    if x - num in nums:
        ans += 1

print(ans // 2)
