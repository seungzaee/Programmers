def solution(wallet, bill):
    answer = 0
    col = wallet[0]
    row = wallet[1]
    col_b = bill[0]
    row_b = bill[1]
    while min(col_b, row_b) > min(col, row) or max(col_b, row_b) > max(col, row) :
        if col_b > row_b :
            col_b //= 2
        else :
            row_b //= 2
        answer += 1
    return answer