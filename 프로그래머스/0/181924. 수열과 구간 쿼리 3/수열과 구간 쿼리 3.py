def solution(arr, queries):
    answer = []
    for idx in queries :
        arr[idx[0]], arr[idx[1]] = arr[idx[1]], arr[idx[0]]
    return arr