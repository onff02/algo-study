def solution(numLog):
    answer = []
    diff_map = {1: "w", -1: "s", 10: "d", -10: "a"}
    for i in range(1, len(numLog)):            
        diff = numLog[i] - numLog[i-1]
        answer.append(diff_map[diff])
    return "".join(answer)

numLog = list(map(int, input().split()))
print(solution(numLog))