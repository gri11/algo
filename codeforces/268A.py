n = int(input())
h, g = [], []
for i in range(n):
    x, y = input().split()
    h.append(x)
    g.append(y)

ans = 0
for i in range(n):
    for j in range(n):
        if i == j:
            continue
        # print('debug')
        # print(h[i], g[i])
        if h[i] == g[j]:
            ans += 1

print(ans)
