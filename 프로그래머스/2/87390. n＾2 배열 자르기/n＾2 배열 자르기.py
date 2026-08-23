def solution(n, left, right):
    res = []
    for i in range(left, right + 1) :
        num = max(i // n, i % n) + 1
        res.append(num)
    
    return res