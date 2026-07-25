def solution(myString, pat):
    answer = 0
    len_pat = len(pat)
    for i in range (len(myString) - len_pat + 1) :
        if myString[i : i + len_pat] == pat :
            answer += 1
    return answer