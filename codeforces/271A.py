x = int(input())
x += 1
while True:
    s = []
    for c in str(x):
        if c in s:
            break
        s.append(c)
    if (len(s) == 4):
        break
    x += 1
print(x)
