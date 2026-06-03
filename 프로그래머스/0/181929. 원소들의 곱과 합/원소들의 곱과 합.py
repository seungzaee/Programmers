import math

def solution(num_list):
    num1 = sum(num_list) ** 2
    num2 = math.prod(num_list)
    if num1 > num2 :
        return 1
    return 0