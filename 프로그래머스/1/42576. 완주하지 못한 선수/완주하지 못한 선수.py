def solution(participant, completion):
    answer = ''
    # 동명이인은 어케 처리? 단순 카운트로는 안될텐데
    cout = {}
    for i in participant:
        if i not in cout:
            cout[i] = 1
        else:
            cout[i] += 1
    for j in completion:
        if j in cout and cout[j] >= 1:
            cout[j]-=1
    
    for k, v in cout.items():
        if v != 0:
            for _ in range(v):
                answer += k
    
    return answer