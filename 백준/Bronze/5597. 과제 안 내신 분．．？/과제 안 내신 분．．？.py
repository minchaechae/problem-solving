all = list(range(1, 31))
submit = [int(input()) for _ in range(28)]
notSubmit = list(set(all) - set(submit))

print(min(notSubmit))
print(max(notSubmit))