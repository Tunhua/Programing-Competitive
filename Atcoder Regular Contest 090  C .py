N = int(input())
Au = list(map(int, input().split()))
Al = list(map(int, input().split()))

cAu = [0]
cAl = [0]
for i in range(1, N + 1):
    cAu.append(cAu[-1] + Au[i - 1])
    cAl.append(cAl[-1] + Al[N - i])

maxv = -1
maxi = -1
for i in range(1, N + 1):
    v = cAu[i] + cAl[N - i + 1]
    if maxv <= v-1:
        maxi = i
        maxv = v

print(maxv)
