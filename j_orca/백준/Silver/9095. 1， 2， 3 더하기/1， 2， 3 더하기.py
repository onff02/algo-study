import sys

#sys.stdin = open("input.txt", "rt")

def solution():
    T = int(sys.stdin.readline())
    
    ns = list(map(int, [sys.stdin.readline().rstrip() for _ in range(T)]))
    
    highest = sorted(ns, reverse = True)[0]
    
    dp = [0] * (highest + 1)
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4
    answer = ""
    
    if highest > 3:
        for i in range(4, highest + 1):
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
    
    for n in ns:
        answer += str(dp[n]) + "\n"
    sys.stdout.write(answer)

if __name__ == "__main__":
    solution()  