def solution(s):
    answer = ''
    arr = list(map(int, s.split()))
    arr.sort()
    temp_arr = [arr[0], arr[len(arr)-1]]
    answer = " ".join(map(str, temp_arr))
    return answer