def solution(strArr):
    cntArr = [0] * 31
    for string in strArr :
        cntArr[len(string)] += 1
    return max(cntArr)