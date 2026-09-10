from collections import deque

def solution(rectangle, characterX, characterY, itemX, itemY):
    answer = 0
    visited = [[False] * 102 for _ in range (102)]
    item_map = map_of_rec(rectangle)
    queue = deque([[characterY * 2, characterX * 2, 0]])
    visited[characterY * 2][characterX * 2] = True
    while queue :
        v = queue.popleft()
        
        if v[0] == itemY * 2 and v[1] == itemX * 2 :
            return v[2] // 2
        # 상
        if item_map[v[0] + 1][v[1]] == True and visited[v[0] + 1][v[1]] == False :
            visited[v[0] + 1][v[1]] = True
            queue.append([v[0] + 1, v[1], v[2] + 1])
        # 하
        if item_map[v[0] - 1][v[1]] == True and visited[v[0] - 1][v[1]] == False :
            visited[v[0] - 1][v[1]] = True
            queue.append([v[0] - 1, v[1], v[2] + 1])
        # 좌
        if item_map[v[0]][v[1] -1] == True and visited[v[0]][v[1] - 1] == False :
            visited[v[0]][v[1] - 1] = True
            queue.append([v[0], v[1] - 1, v[2] + 1])
        # 상
        if item_map[v[0]][v[1] + 1] == True and visited[v[0]][v[1] + 1] == False :
            visited[v[0]][v[1] + 1] = True
            queue.append([v[0], v[1] + 1, v[2] + 1])
    return answer

def map_of_rec(rectangle) :
    v = [[False] * 102 for _ in range(102)]
    for xy in rectangle :
        for i in range(xy[1] * 2, xy[3] * 2 + 1) :
            for j in range(xy[0] * 2, xy[2] * 2 + 1) :
                v[i][j] = True
    for xy in rectangle :
        for i in range(xy[1] * 2 + 1, xy[3] * 2) :
            for j in range(xy[0] * 2 + 1, xy[2] * 2) :
                v[i][j] = False
    return v