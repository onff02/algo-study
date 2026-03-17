import sys
input = sys.stdin.readline

n = int(input())

target = []
stack = []
result = []
i = 1
possible = 1

for _ in range(n):
    target.append(int(input()))

for num in target:
    while i <= num:
        stack.append(i)
        result.append('+')
        i += 1

    if stack[-1] == num:
        stack.pop()
        result.append('-')

    else:
        possible = 0
        break

if possible:
    for x in range(len(result)):
        print(result[x])
else:
    print('NO')