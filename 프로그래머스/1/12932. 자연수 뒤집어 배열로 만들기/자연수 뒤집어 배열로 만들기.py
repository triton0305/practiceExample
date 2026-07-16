def solution(n):
    length = len(str(n))
    answer = []
    for i in range (0, length):
        if i!=0:
            a = 0
            a = n // (pow(10, i))
            a = a % 10
            answer.append(a)
        else:
            a = 0
            a = n % 10
            answer.append(a)
    return answer