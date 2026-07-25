def solution(my_string, s, e):
    answer = ''
    reverse_str = "".join(reversed(my_string[s : e + 1]))
    answer = my_string[:s] + reverse_str + my_string[e + 1 :]
    return answer