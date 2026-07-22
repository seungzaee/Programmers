
def solution(myStr):
    myStr = myStr.replace('a',' ').replace('b', ' ').replace('c', ' ')
    myStr.strip()
    answer = myStr.split()
    if len(answer) == 0 :
        answer.append("EMPTY")
    return answer