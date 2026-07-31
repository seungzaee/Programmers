def solution(ineq, eq, n, m):
    if ineq == '>' and eq == '=' :
        if n >= m :
            return 1
    elif ineq == '<' and eq == '=' :
        if n <= m :
            return 1
    elif ineq == '>' and eq == '!' :
        if n > m :
            return 1
    if ineq == '<' and eq == '!' :
        if n < m :
            return 1
    return 0