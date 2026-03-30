import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n, m = map(int, input().split())
school = []

nx = [0, 0, 1, -1]
ny = [1, -1, 0, 0]
people = 0
visit = [[False] * m for _ in range(n)]

def meet(x, y):
    visit[y][x] = True
    global people

    for i in range(4):
        di = nx[i] + x
        dj = ny[i] + y

        if 0 <= di < m and 0 <= dj < n:
            if not visit[dj][di]:

                if school[dj][di] == 'P':
                    people += 1
                
                if school[dj][di] != 'X':
                    meet(di,dj)

for i in range(n):
    s = input().strip()
    if s.find('I') != -1:
        doyeon_x, doyeon_y = (int(s.find('I')), i)
    school.append(list(s))

meet(doyeon_x, doyeon_y)

if people == 0:
    print('TT')
else:
    print(people)