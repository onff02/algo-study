import sys
input = sys.stdin.readline

n, k = map(int, input().split())

people = list(range(1, n+1))
result = []
i = 0
while people:
    i = (i+k-1) % len(people)
    result.append(people.pop(i))
    
print("<" + ", ".join(map(str, result)) + ">")

