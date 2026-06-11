def solution(s, skip, index):
    answer = ''
    alpha = [char for char in 'abcdefghijklmnopqrstuvwxyz' if char not in skip]

    for i in s :
        i = alpha[(alpha.index(i) + index) % len(alpha)]
        answer += i
    
    return answer