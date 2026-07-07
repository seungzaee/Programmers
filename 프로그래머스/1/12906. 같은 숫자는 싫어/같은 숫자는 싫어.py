def solution(arr):
    stack = []
    
    for char in arr :
        if stack and stack[-1] == char :
            continue
        else :
            stack.append(char)
    return stack