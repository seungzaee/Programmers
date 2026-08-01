def solution(arr):
    col = len(arr[0])
    row = len(arr)
    if col > row :
        add_arr = [0] * (col)
        for i in range (col - row) :
            arr.append(add_arr)
    elif col < row :
        for array in arr :
            for i in range (row - col) :
                array.append(0)
    else :
        return arr
    return arr