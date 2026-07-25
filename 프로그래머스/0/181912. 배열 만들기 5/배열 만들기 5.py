def solution(intStrs, k, s, l):
    answer = []
    for num in intStrs :
        num1 = int(num[s : s + l])
        if num1 > k :
            answer.append(num1)
    return answer