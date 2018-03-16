import sys
sys.setrecursionlimit(200002)

N,M = map(int, input().split())
mp = [[] for i in range(N + 1)]
for i in range(M):
    L, R, D = map(int, input().split())
    mp[L].append([R, D])
    mp[R].append([L, -D])

dist = [None]*(N+1)

def dfs(n):
    for np, nd in mp[n]:
        if dist[np] is None:
            dist[np] = dist[n] + nd
            if not dfs(np):
                return False
        else:
            if dist[np] != dist[n] + nd:
                return False
    return True

ans = True

for i in range(1, N+1):
    if dist[i] is None:
        dist[i]=0
    if not dfs(i):
        ans = False
        break
if ans:
    print("Yes")
else:
    print("No")
