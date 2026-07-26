def solution(arr):
    answer = []
    if 2 not in arr :
        answer.append(-1)
        return answer
    for i in range (len(arr)) :
        if arr[i] == 2 :
            answer.append(i)
    return arr[answer[0] : answer[-1] + 1]