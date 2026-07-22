import math

def solution(arr):
    num_list = [1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024]
    while True :
        len_arr = len(arr)
        if len_arr in num_list :
            break
        arr.append(0)
    return arr