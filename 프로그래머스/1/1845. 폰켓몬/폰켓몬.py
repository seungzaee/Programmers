def solution(nums):
    answer = 0
    dic = {}
    num_poketmon = len(nums) // 2
    for num in nums :
        if num in dic :
            dic[num] += 1
        else :
            dic[num] = 1
    if num_poketmon <= len(dic) :
        return num_poketmon
    else :
        return len(dic)
    return answer