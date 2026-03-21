import sys
input = sys.stdin.readline

n, m = map(int, input().split())

hear = set(input().strip() for _ in range(n))
result = set()

for _ in range(m):
    see = input().strip()
    if see in hear:
        result.add(see)

result1 = sorted(result)
print(len(result1))
for x in result1:
    print(x)