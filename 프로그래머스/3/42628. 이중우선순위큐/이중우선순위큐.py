def solution(operations):
    queue = []
    for operation in operations :
        res = operation.split()
        if res[0] == 'I' :
            num = int(res[1])
            queue.append(num)
            queue.sort()
        else :
            if not queue :
                continue
            if res[1] == '1' :
                # 최댓값 삭제
                queue.pop(-1)
            else :
                # 최솟값 삭제
                queue.pop(0)
    if not queue :
        return [0, 0]
    else :
        # 최댓값, 최솟값
        return [max(queue), min(queue)]