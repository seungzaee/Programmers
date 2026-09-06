#1순위 : 작업의 소요시간이 짧은 것
#2순위 : 작업의 요청 시각이 빠른 것
#3순위 : 작업 번호가 작은 것
# -> 모든 작업 반환 시간의 평균의 정수 부분을 return
import heapq as hq

def solution(jobs):
    heap = []
    len_job = len(jobs)
    time = 0
    answer = 0
    for idx, job in enumerate(jobs) :
        job.append(idx)
    jobs.sort()
    while True :
        if not jobs and not heap :
            break
        while True :
            if jobs and time >= jobs[0][0] :
                hq.heappush(heap, [jobs[0][1], jobs[0][0], jobs[0][2]])
                jobs.pop(0)
            else :
                break
        if heap :
            res = hq.heappop(heap)
            time += res[0]
            return_time = time - res[1]
            answer += return_time
        else :
            time += 1
    return answer // len_job