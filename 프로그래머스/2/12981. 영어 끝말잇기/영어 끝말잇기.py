def solution(n, words):
    answer = []
    used = set()
    used.add(words[0])
    
    for i in range (1, len(words)) :
        if words[i - 1][-1] != words[i][0] :
            return [i % n + 1, i // n + 1]
        if words[i] in used :
            return [i % n + 1, i // n + 1]
        used.add(words[i])
    return [0, 0]