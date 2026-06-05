def solution(my_string, is_prefix):

    length = len(is_prefix)
    prefix = my_string[:length]
    if is_prefix == prefix :
        return 1
    return 0