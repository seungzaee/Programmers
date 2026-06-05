def solution(n):
    binary1 = format(n, 'b')
    cnt1 = 0
    for i in range(len(binary1)) :
        if binary1[i] == '1' :
            cnt1 += 1
    
    while True :
        cnt2 = 0
        n += 1
        binary2 = format(n, 'b')
        for i in range(len(binary2)) :
            if binary2[i] == '1' :
                cnt2 += 1
        if cnt1 == cnt2 :
            break
    return n