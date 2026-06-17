def solution(s):
    answer = []
    cnt = 0
    zero = 0
    while True :
        if s == '1' :
            break;
        cnt += 1
        len_s = len(s)
        s = s.replace('0','')
        len_remove = len(s)
        if len_s == len_remove :
            zero += 0
            s = bin(len_s)[2:]
        else :
            zero += len_s - len_remove
            s = bin(len_remove)[2:]
    answer.append(cnt)
    answer.append(zero)
    return answer