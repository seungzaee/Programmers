import math

def solution(n):
    sqrt = int(math.sqrt(n))
    if sqrt * sqrt == n :
        return (sqrt + 1) * (sqrt + 1)
    else :
        return -1