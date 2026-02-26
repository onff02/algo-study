def solution(phone_book):
    answer = True
    phone_book.sort()
    for cnt in range(len(phone_book)-1):
        pn_f = phone_book[cnt]
        pn_b = phone_book[cnt+1]
        if pn_b.startswith(pn_f):
            answer = False
        
    return answer