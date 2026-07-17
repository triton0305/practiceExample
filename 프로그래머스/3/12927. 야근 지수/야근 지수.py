import heapq
def solution(n, works):
    answer = 0
    total = 0
    for i in range(0,len(works)):
        total+=works[i]
        works[i] *= -1
    heapq.heapify(works)
    if total > n:
        while (n > 0) :
            temp = heapq.heappop(works) + 1
            heapq.heappush(works, temp)
            n -= 1
        for j in range (0, len(works)):
            answer += pow(works[j], 2)
    return answer