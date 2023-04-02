import sys
import heapq

# input = sys.stdin.readline

def ip():
  return list(map(int, sys.stdin.readline().strip().split()))

n, m = ip()

G = [[] for _ in range(n)]
# G = [{} for _ in range(n)]

for i in range(m):
  a, b, w = ip()
  G[a].append((b, w))

print(G)

def dijkstra(v):
  dist = [float('inf')] * n
  p = [None] * n
  dist[v] = 0
  pq = [(0, v)]
  while pq:
    d, u = heapq.heappop(pq)
    for v, w in G[u]:
      if(dist[u] + w < dist[v]):
        dist[v] = dist[u] + w
        p[v] = u
        heapq.heappush(pq, (dist[v], v))
  return dist, p

def print_path(p, v):
  if p[v] is not None:
    print_path(p, p[v])
  print(v, end=' ')
  
def get_path(p, v, path=[]):
  if p[v] is not None:
    path = get_path(p, p[v], path)
  path.append(v)
  return path

dist, p = dijkstra(0)
print(dist, p)
# print_path(p, 5)
print(get_path(p, 5))