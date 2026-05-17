def solution(n):
    answer = 0
    for i in range(1,n):
        temp = i
        for j in range(i+1,n):
            temp += j
            if temp < n:
                pass
            elif temp == n:
                answer +=1
                break
            else:
                break
    answer += 1
    
    return answer