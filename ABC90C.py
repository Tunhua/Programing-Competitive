N = int(input())
M = int(input())

C = 0

for i in range(N:
    for j in range(M):
        c = 0
        for k in range(2):
            for l in range(2):
                if ((i+k <= N-1) and (j+l <= M-1)):
                    c += 1
                if ((i-k >= 0) and (i-l >= 0)):
                    c += 1
        if c % 2 == 1:
            C += 1

print(C)
