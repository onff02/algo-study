def solution(arr, queries):
    answer = []
    for i in range(len(queries)):
        temp = []
        s = queries[i][0]
        e = queries[i][1]
        k = queries[i][2]
        for j in range(s, e + 1):
            if arr[j] > k:
                temp.append(arr[j])
        if not temp:
            answer.append(-1)
        else:
            answer.append(min(temp))
                
    return answer

arr = list(map(int, input().split()))
queries = eval(input())
print(solution(arr, queries))