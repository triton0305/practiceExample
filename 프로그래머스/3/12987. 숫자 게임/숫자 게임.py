def solution(A, B):
    A.sort()
    B.sort()
    answer = 0
    a = 0
    b = 0
    for i in range(0, len(B)):
        if A[a] < B[b]:
            a += 1
            b += 1
            answer += 1
        else:
            b += 1
    return answer