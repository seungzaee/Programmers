def solution(picture, k):
    answer = []
    for string in picture :
        dup_string = ""
        for i in range (len(string)) :
            for j in range (k) :
                dup_string += string[i]
        for i in range (k) :
            answer.append(dup_string)
    return answer