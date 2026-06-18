import math

def solution(n):
    answer = 1
    two = n // 2
    one = n % 2
    for i in range (1, two + 1) :
        num = n - i * 2
        answer += math.factorial(num + i) // (math.factorial(num) * math.factorial(i))
    return answer % 1234567