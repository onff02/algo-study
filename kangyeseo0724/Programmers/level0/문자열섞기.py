def solution(str1, str2):
    string = ""
    for i in range (len(str1)):
        string += str1[i] + str2[i]
    return string

str1 = input()
str2 = input()
print(solution(str1, str2))