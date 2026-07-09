def solution(my_string, k):
    answer = ''
    for i in range(k):
        answer += my_string
    return answer

my_string = input()
k = int(input())
print(solution(my_string, k))