def solution(progresses, speeds):
    answer = []
    days = []
    for i in range (len(progresses)) :
        cnt = 0
        num = progresses[i]
        while num < 100 :
            num += speeds[i]
            cnt += 1
        days.append(cnt)

    first = days[0]
    cnt = 0
    for idx, val in enumerate(days) :
        cnt += 1
        if first < val :
            first = val
            answer.append(cnt - 1)
            cnt = 1
    answer.append(cnt)
    return answer