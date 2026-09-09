def solution(n, computers):
    answer = 0
    # 인접 리스트로 바꾸기
    adj_list = [[] for _ in range(n)]
    for i in range(len(computers)) :
        for j in range(len(computers[0])) :
            if i != j and computers[i][j] == 1 :
                adj_list[i].append(j)
    visited = [False] * n
    def dfs (adj_list, v, visited) :
        visited[v] = True
        for i in adj_list[v] :
            if not visited[i] :
                dfs(adj_list, i, visited)
    for i in range(n) :
        if visited[i] == False :
            dfs(adj_list, i, visited)
            answer += 1
    return answer