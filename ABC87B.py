a = int(input())
b = int(input())
c = int(input())
x = int(input())
X = x/50
count = 0
for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            Y = X - i*10 - j*2 - k
            if Y == 0:
                count += 1
print(count)
