import heapq
def solution(n, works):
    answer = 0
    sum = 0
    tem = 0
    for i in range(0,len(works)):
        sum+=works[i]
        works[i] *= -1
    heapq.heapify(works)
    if sum > n:
        while (n > 0) :
            tem = works[0]
            tem += 1
            heapq.heappop(works)
            heapq.heappush(works, tem)
            n -= 1
        for j in range (0, len(works)):
            answer += pow(works[j], 2)
    return answer