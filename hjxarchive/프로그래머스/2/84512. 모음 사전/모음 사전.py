def solution(word):
    answer = 0
    dic = {'A':0, 'E':1, 'I':2, 'O':3, 'U':4}
    n = len(word)
    weight = [781, 156, 31, 6, 1]
    for idx in range(n-1,-1,-1):
        answer += dic[word[idx]]*weight[idx] + 1
    return answer
    