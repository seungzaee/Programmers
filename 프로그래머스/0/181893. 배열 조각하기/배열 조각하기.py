def solution(arr, query):
    for idx, num in enumerate(query) :
        if idx % 2 == 0 :
            arr = arr[:num + 1]
        else :
            arr = arr[num:]
    return arr