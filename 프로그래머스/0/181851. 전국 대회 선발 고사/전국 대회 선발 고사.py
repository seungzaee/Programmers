def solution(rank, attendance):
    final = []
    for i in range (len(rank)) :
        if attendance[i] :
            final.append((rank[i], i))
    final.sort()
    
    return final[0][1] * 10000 + final[1][1] * 100 + final[2][1]