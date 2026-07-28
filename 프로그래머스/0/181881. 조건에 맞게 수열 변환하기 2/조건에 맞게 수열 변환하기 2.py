def solution(arr):
    x = 0
    while True :
        cnt = 0
        for i in range (len(arr)) :
            if arr[i] >= 50 and arr[i] % 2 == 0 :
                arr[i] = arr[i] // 2
                cnt += 1
            elif arr[i] < 50 and arr[i] % 2 == 1 :
                arr[i] = arr[i] * 2 + 1
                cnt += 1
        if cnt == 0 :
            break
        x += 1
    return x