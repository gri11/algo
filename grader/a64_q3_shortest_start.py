import sys
import heapq

# input = sys.stdin.readline

def ip():
  return list(map(int, sys.stdin.readline().strip().split()))

n, m, k = ip()
v = ip()[0]
ks = ip()

G = [{} for _ in range(n)]
# G = [[] for _ in range(n)]

for i in range(m):
  a, b, w = ip()
  G[b][a] = w
  
# print(G)

def dijkstra(v):
  dist = [float('inf')] * n
  dist[v] = 0
  pq = [(0, v)]
  while pq:
    d, u = heapq.heappop(pq)
    if d > dist[u]:
      continue
    for v, w in G[u].items():
      if dist[u] + w < dist[v]:
        dist[v] = dist[u] + w
        heapq.heappush(pq, (dist[v], v))
  return dist

ans = float('inf')
dist = dijkstra(v)
for k in ks:
  if dist[k] < ans:
    ans = dist[k]
print(ans)