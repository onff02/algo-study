import sys
from collections import Counter
input = sys.stdin.readline

n = int(input())
num = list(map(int, input().split()))
counts = Counter(num)

m = int(input())
target = list(map(int, input().split()))
result = []

for x in target:
        result.append(str(counts[x]))

print(" ".join(result))

