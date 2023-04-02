import sys

def ip():
  return list(map(int, sys.stdin.readline().strip().split()))

n, a, b = ip()

X = []

for i in range(n):
  x, y = ip()
  X.append((x, y))
  
def bfs(a, b):
  holes = dict()
  q = [(a, b)]
  while q:
    a, b = q.pop(0)
    print(q)
    if (a, b) in X:
      if (a, b) not in holes:
        holes[(a, b)] = 1
      else:
        holes[(a, b)] += 1

    for i in range(2):
      for j in range(2):
        if a + i < 0 or a + i >= n or b + j < 0 or b + j >= n:
          continue
        q.append((a + i, b + j))
  
  return holes

holes = bfs(a, b)

print(holes)
  
  
  