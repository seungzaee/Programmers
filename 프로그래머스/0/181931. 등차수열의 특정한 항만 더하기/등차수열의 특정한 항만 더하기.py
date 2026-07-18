def solution(a, d, included):
    answer = 0
    for check in included :
        if check :
            answer += a
            a += d
        else :
            a += d
    return answer