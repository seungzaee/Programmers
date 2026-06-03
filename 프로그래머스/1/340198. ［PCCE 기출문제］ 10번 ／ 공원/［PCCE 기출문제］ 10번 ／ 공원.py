def solution(mats, park):

    mats.sort(reverse = True)
    
    rows = len(park)
    cols = len(park[0])
    
    for size in mats :
        for r in range (rows - size + 1) :
            for c in range (cols - size + 1) :
                can_place = True
                
                for i in range (r, r + size) :
                    for j in range (c, c + size) :
                        if park[i][j] != "-1" :
                            can_place = False
                            break
                    if not can_place :
                        break
                        
                if can_place : 
                    return size
    return -1