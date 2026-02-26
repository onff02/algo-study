def solution(nums):
    nums.sort()
    num_set = set(nums)
    lis = [0 for _ in range(nums[-1])]
    for i in nums:
        lis[i-1] = lis[i-1] + 1
    N = len(nums)/2
    
    if N <= len(num_set):
        answer = N 
    else: 
        answer = len(num_set)
    return answer