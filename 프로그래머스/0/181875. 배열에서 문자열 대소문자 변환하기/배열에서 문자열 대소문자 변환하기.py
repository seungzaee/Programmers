def solution(strArr):
    answer = []
    for idx, char in enumerate(strArr) :
        if idx % 2 == 1 :
            answer.append(char.upper())
        else :
            answer.append(char.lower())
    return answer