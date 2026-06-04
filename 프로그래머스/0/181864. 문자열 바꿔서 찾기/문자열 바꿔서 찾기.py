def solution(myString, pat):
    answer = myString.replace('A', '#').replace('B', 'A').replace('#', 'B')
    if pat in answer :
        return 1
    else :
        return 0