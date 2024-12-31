w = int(input())
n = int(input())
sum = 0
for i in range(n):
    W, H = map(int, input().split())
    sum += W * H

print(sum // w)
