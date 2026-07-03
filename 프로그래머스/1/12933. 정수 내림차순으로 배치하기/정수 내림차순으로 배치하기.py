def solution(n):
    res = []
    for i in str(n) :
        res.append(i)
    res.sort(reverse = True)
    string = ''
    for i in res :
        string += i
    return int(string)