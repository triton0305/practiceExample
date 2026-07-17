def solution(s):
    arr = list(s)
    if arr[0] == ')': return False
    index = 0
    number = 0
    while index < len(arr):
        if number < 0 : return False
        elif arr[index] == '(':
            number+=1
            if index +1 == len(arr) and number >= 1: return False
            index+=1
        elif arr[index] == ')':
            number-=1
            if len(arr) == index + 1 and number == 0:
                break
            elif len(arr) == index + 1 and number != 0:
                return False
            index+=1
    return True