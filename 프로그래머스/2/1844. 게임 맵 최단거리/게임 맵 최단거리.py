from collections import deque

def solution(maps):

    queue = deque([[0, 0, 1]]) # row, col, distance
    visited = [[False] * len(maps[0]) for _ in range (len(maps))]
    visited[0][0] = True
    target_row = len(maps) - 1
    target_col = len(maps[0]) - 1
    
    while queue :
        v = queue.popleft()
        
        row = v[0]
        col = v[1]
        dist = v[2]
        
        if row == target_row and col == target_col :
            return dist
        # 상
        if row - 1 >= 0 and maps[row - 1][col] == 1 and visited[row - 1][col] == False:
            up = [row - 1, col, dist + 1]
            queue.append(up)
            visited[up[0]][up[1]] = True
        # 하
        if row + 1 < len(maps) and maps[row + 1][col] == 1 and visited[row + 1][col] == False:
            down = [row + 1, col, dist + 1]
            queue.append(down)
            visited[down[0]][down[1]] = True
        # 좌
        if col - 1 >= 0 and maps[row][col - 1] == 1 and visited[row][col - 1] == False:
            left = [row, col - 1, dist + 1]
            queue.append(left)
            visited[left[0]][left[1]] = True
        # 우
        if col + 1 < len(maps[0]) and maps[row][col + 1] == 1 and visited[row][col + 1] == False:
            right = [row, col + 1, dist + 1]
            queue.append(right)
            visited[right[0]][right[1]] = True
    return -1