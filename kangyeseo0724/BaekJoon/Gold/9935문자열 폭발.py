import sys
s = sys.stdin.readline().strip()
delete = sys.stdin.readline().strip()
stack = []

for i in range(len(s)):
    stack.append(s[i])
    if "".join(stack[-len(delete):]) == delete:
        for _ in range(len(delete)):
            stack.pop()


if not stack:
    print("FRULA")
else:
    print("".join(stack))
    