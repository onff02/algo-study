def solution(array, commands):
    answer = []
    
    for c in commands:
        i = c[0] -1
        j = c[1]
        k = c[2] -1
        
        ar = array[i : j]
        arr = sorted(ar)
        answer.append(arr[k])
        
    return answer