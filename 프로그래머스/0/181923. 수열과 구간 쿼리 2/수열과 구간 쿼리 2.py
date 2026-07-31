def solution(arr, queries):
    answer = []
    for (s, e, k) in queries :
        check_list = []
        for i in range (s, e + 1) :
            if arr[i] > k :
                check_list.append(arr[i])
        if check_list :
            answer.append(min(check_list))
        else :
            answer.append(-1)
    return answer