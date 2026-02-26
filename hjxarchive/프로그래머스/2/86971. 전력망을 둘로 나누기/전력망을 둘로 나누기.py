# O(n^3) ... n : wire 제거 경우의 수 / n^2 : 각 제거의 수에서 가능한 연결 모두 찾기.(전력망 수 계산)
def solution(n, wires):
    diff = 100
    answer = -1
    for cnt in range(n-1):
        wire_set = {1}
        
        visited_edge = [False] * (n-1) 
        visited_edge[cnt] = True 
        
        flag = 1 
        while flag != 0:
            flag = 0
            for idx in range(n-1):
                if not visited_edge[idx]:
                    u, v = wires[idx]
                    if (u in wire_set) or (v in wire_set):
                        wire_set.add(u)
                        wire_set.add(v)
                        visited_edge[idx] = True 
                        flag = 1 
        
        m = len(wire_set)
        if abs(n-2*m) < diff:
            diff = abs(n - 2*m)
            answer = diff
    return answer