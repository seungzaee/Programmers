import heapq

def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while True :
        if len(scoville) == 1 and scoville[0] < K :
            return -1
        food1 = heapq.heappop(scoville)
        if food1 >= K :
            break
        else :
            food2 = heapq.heappop(scoville)
            answer += 1
            spicy = food1 + (food2 * 2)
            heapq.heappush(scoville, spicy)
    return answer