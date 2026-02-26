def solution(clothes):
    answer = 1
    sets = {}
    for cth in clothes:
        name = cth[0]
        type = cth[1]
        if type in sets.keys():
            sets[type].append(name)
        else:
            sets[type] = [name]
    for type in sets.keys():
        answer = answer*(len(sets[type]) + 1)
    answer -= 1
    return answer