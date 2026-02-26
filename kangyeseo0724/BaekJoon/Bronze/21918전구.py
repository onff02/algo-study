import sys
n,m = map(int, sys.stdin.readline().split())

bulb = list(map(int, sys.stdin.readline().split()))

for j in range(m):
    a, b, c = map(int, sys.stdin.readline().split())
    
    if a == 1:
        bulb[b - 1] = c
    elif a == 2:
        for k in range(b - 1, c):
            bulb[k] = 1 - bulb[k]
    elif a == 3:
        for k in range(b - 1, c):
            bulb[k] = 0
    else:
        for k in range(b - 1, c):
            bulb[k] = 1

print(*(bulb))