def solution(n, control):
    answer = n
    for cmd in control :
        if cmd == 'w' :
            answer += 1
        elif cmd == 's' :
            answer -= 1
        elif cmd == 'd' :
            answer += 10
        else :
            answer -= 10
    return answer