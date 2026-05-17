def solution(s):
    flag = 0
    answer = ''
    for cnt in range(len(s)):
        temp = s[cnt]
        if temp == " ":
            flag = 0
            answer += " "
        elif flag == 0:
            if temp.isdigit():
                answer += temp
                flag = 1
            else:
                answer += temp.upper()
                flag = 1
        else:
            answer += temp.lower()
    return answer