N = int(input())
A1s = list(map(int,input().split()))
A2s = list(map(int, input().split()))

ans = 0
for j in range(N):
    c = sum(A1s[:j+1] + sum(A2s[j:])
    if ans <= c -1:
        ans = c

print(ans)
