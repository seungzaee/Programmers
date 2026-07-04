def solution(n):
    answer = 0
    for i in range (1, n // 2 + 1) :
        sum_num = 0
        while True :
            sum_num += i
            i += 1
            if sum_num == n :
                answer += 1
                break
            if sum_num > n :
                break
    return answer + 1