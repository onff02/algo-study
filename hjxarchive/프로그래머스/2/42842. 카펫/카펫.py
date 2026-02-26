

def solution(brown, yellow):
    answer = []
    n = round((yellow**(0.5)))
    for h in range(1,n+1):
        if (yellow%h == 0):
            w = yellow//h
            if ((2*(h+w)+4) == brown):
                answer = [w+2,h+2]
    return answer