def solution(n):
    answer = 0
    s =[]
    l = len(str(n))
    s[:l] = str(n)
    s.sort()
    s.reverse()
    for i in range (0, l):
        answer = answer + int(s[i])*pow(10, l-i-1)
    return answer