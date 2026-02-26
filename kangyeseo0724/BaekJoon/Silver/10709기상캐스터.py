import sys
h, w = map(int, sys.stdin.readline().split())

grid = [list(sys.stdin.readline().strip()) for _ in range(h)]
result = [[-1] * w for _ in range(h)]

for i in range(h):
    is_cloud = -1
    for j in range(w):
        if grid[i][j] == 'c':
            is_cloud = 0
        elif is_cloud != -1:
            is_cloud += 1
        
        result[i][j] = is_cloud

for i in result:
    print(*(i))