from itertools import permutations

def solution(k, dungeons):
    answer = 0
    permu_arr = list(permutations(dungeons))
    
    for arr in permu_arr :
        fatigue = k
        res = 0
        for minimum, consume in arr :
            if fatigue >= minimum :
                fatigue -= consume
                res += 1
        if res > answer :
            answer = res
        
    return answer