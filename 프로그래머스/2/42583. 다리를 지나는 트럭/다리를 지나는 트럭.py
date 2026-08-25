def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = []
    bridge_weight = 0
    while True :
        answer += 1
        # 다리를 건너고 있는 트럭
        if bridge :
            if bridge[0][1] == bridge_length :
                bridge_weight -= bridge[0][0]
                bridge.pop(0)
            for truck in bridge :
                    truck[1] += 1
                    
        # 남은 트럭이 있는 경우 다리에 트럭 추가
        if truck_weights:
            if bridge_length > len(bridge) and weight >= bridge_weight + truck_weights[0] :
                bridge_weight += truck_weights[0]
                truck = [truck_weights.pop(0) , 1]
                bridge.append(truck)
            
        # 종료 조건
        if not bridge and not truck_weights :
            break
            
    return answer