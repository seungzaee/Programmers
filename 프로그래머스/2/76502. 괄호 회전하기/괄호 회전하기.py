def solution(s):
    answer = 0
    for i in range (len(s)) :
        string = s[i:] + s[:i]
        if check_string(string) :
            answer += 1
    return answer

def check_string(s) :
    stack = []
    stack.append(s[0])
    for i in range(1, len(s)) :
        if not stack :
            stack.append(s[i])
        elif stack[-1] == '[' and s[i] == ']' :
            stack.pop()
        elif stack[-1] == '{' and s[i] == '}' :
            stack.pop()
        elif stack[-1] == '(' and s[i] == ')' :
            stack.pop()
        else :
            stack.append(s[i])
    if not stack :
        return True
    else :
        return False