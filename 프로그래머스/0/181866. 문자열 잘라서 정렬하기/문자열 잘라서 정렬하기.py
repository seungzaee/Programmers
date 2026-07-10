def solution(myString):
    answer = [c for c in myString.split('x') if c]
    answer.sort()
    return answer