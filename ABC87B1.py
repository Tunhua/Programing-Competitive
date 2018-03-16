A = int(input())
B = int(input())
C = int(input())
X = int(input())
x = X/50

count=0

for a in range(A+1):
    for b in range(B+1):
        r=x-a*10-b*2
        if r>=0 and r<-C:
            count+=1
print(count)
 
