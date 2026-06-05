def solution(num_list, n):
    answer = []
    arr1 = num_list[:n]
    arr2 = num_list[n:]
    answer = arr2 + arr1
    return answer