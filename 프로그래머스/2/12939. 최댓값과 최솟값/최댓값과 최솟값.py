def solution(s):
    s = list(map(int,s.split()))
    min = s[0]
    max = s[0]
    for i in range(1,len(s)):
        if s[i] < min: 
            min = s[i]
        elif s[i] > max:
            max = s[i]
        
    answer = str(min) + " " + str(max)
    return answer