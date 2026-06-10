def solution(elements):
    n = len(elements)

    elements = elements * 2

    prefix = [0]

    for num in elements:
        prefix.append(prefix[-1] + num)

    sums = set()

    for length in range(1, n + 1):
        for start in range(n):
            res = prefix[start + length] - prefix[start]
            sums.add(res)

    return len(sums)