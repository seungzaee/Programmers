def solution(priorities, location):
    answer = 0
    # index 구분, enumerate로 tuple 만들어서 새롭게 저장
    queue = []
    for idx, priority in enumerate(priorities) :
        queue.append((priority, idx))
    # 해당 위치 몇번째로 실행되는지 체크
    while True :
        process = queue.pop(0)
        if not queue :
            answer += 1
            return answer
        if process[0] < max(queue)[0] :
            queue.append(process)
        elif process[0] >= max(queue)[0] :
            answer += 1
            if process[1] == location :
                return answer