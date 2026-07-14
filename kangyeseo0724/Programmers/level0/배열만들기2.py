def solution(l, r):
    answer = []
    for i in range(l, r+1):
        if set(str(i)).issubset({'0', '5'}):
            answer.append(i)
        if not answer:
            return [-1]
            
    return answer

l, r = map(int, input().split())
print(solution(l, r))