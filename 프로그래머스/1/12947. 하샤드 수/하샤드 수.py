def solution(x):
    answer = True
    arr = []
    l = len(str(x))
    arr[:l] = str(x)
    sum = 0
    for i in range(0, l):
        sum = sum + int(arr[i])
    if(x%sum!=0):answer=False
    return answer