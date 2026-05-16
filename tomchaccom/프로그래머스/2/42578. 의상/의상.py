def solution(clothes):
    answer = 0
    
    arr = {}
    for i in clothes:
        if i[1] not in arr:
            arr[i[1]] = 1
        else :
            arr[i[1]] += 1
    
    t = 1
    for i,v in arr.items():
        t *= (v + 1)
    
    
    if len(arr) == 1:
        answer = len(clothes)
    else: 
        answer = t -1

    return answer