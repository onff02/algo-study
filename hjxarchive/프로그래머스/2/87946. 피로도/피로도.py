# O(n!)이 소요되는 Brute-Force, n=8 이므로 수행가능!
from itertools import permutations

def solution(k, dungeons):
    answer = 0
    # 순열 만들기
    candidates = permutations(dungeons, len(dungeons))
    for p in candidates:
        current_k = k 
        cnt = 0
        for req, used in p:
            if current_k >= req:
                current_k -= used
                cnt += 1
            else: break
        answer = max(answer, cnt)
    return answer