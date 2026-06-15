def solution(want, number, discount):
    answer = 0
    want_list = []
    
    for idx, product in enumerate(want) :
            for i in range (number[idx]) :
                want_list.append(product)
                
    want_list.sort()
    
    check = []
    for i in range(len(discount) - 9) :
        check = discount[i : i + 10]
        check.sort()
        if check == want_list :
            answer += 1
        
    return answer