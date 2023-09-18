n, x = map(int, input().split())
n_list = list(map(int, input().split()))

for a in n_list:
    if a < x:
        print(a, end= " ")
