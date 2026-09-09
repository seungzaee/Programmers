from collections import deque

def solution(begin, target, words):
    cnt = 0
    if target not in words :
        return 0
    queue = deque([[begin, 0]])
    visited = [False] * len(words)
    while queue :
        v = queue.popleft()
        if v[0] == target :
            return v[1]
        for i in range (len(words)) :
            if check_diff(v[0], words[i]) and not visited[i]:
                queue.append([words[i], v[1] + 1])
                visited[i] = True


def check_diff (str1, str2) :
    cnt = 0
    for i in range (len(str1)) :
        if str1[i] != str2[i] :
            cnt += 1
    if cnt == 1 :
        return True
    else :
        return False