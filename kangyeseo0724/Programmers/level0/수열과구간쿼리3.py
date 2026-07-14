def solution(arr, queries):
    for i in range(len(queries)):
        for j in range(1, len(queries[i])):
            arr[queries[i][j]], arr[queries[i][j - 1]] = arr[queries[i][j - 1]], arr[queries[i][j]]
    
    return arr
        
arr = list(map(int, input().split()))
queries = eval(input())
print(solution(arr, queries))