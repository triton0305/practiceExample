def solution(n):
    arr = []
    temp = 0
    for i in range(0, n+1):
        if i == 0:
            arr.append(0)
        elif i == 1:
            arr.append(1)
        else:
            temp = arr[1]
            arr[1] = arr[0] + arr[1]
            arr[0] = temp
            
    return arr[1]%1234567