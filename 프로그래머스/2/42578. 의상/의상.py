def solution(clothes):
    answer = 1
    dic = {}
    for clothe, category in clothes :
        if category not in dic :
            dic[category] = 0
        dic[category] += 1
    
    for i in dic.values() :
        answer *= (i + 1)
        
    return answer - 1