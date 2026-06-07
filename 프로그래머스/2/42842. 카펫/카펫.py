import math

def solution(brown, yellow):
    answer = []
    width = 0
    height = 0
    area = brown + yellow
    for i in range (3, int(math.sqrt(area)) + 1) : 
        if area % i == 0 :
            height = i
            width = area // height
            
            if (width - 2) * (height - 2) == yellow :
                answer.append(width)
                answer.append(height)
    return answer