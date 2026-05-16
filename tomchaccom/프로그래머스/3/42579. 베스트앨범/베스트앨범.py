def solution(genres, plays):
    answer = []
    
    pli = {}
    for i,t in zip(genres,plays):
        if i not in pli:
            pli[i] = t
        else:
            pli[i] += t
    
    pli2 = sorted(pli.items(), key = lambda x : x[1], reverse = True)
    
    result = {}
    
    # 💡 이 부분을 for i in pli2: 에서 변수 분리 구조로 수정합니다!
    for i, _ in pli2: 
        for t, (j, k) in enumerate(zip(genres, plays)) :
            if i == j:
                if j not in result:
                    result[j] = [[t, k]]
                else:
                    result[j].append([t, k])
        
    for i, _ in pli2:
        result[i] = sorted(result[i], key=lambda x: (-x[1], x[0]))
        for song in result[i][:2]:
            answer.append(song[0])
            
    return answer