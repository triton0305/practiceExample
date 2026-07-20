def solution(s):
    length_s = len(s)
    cnt_0 = 0
    cnt = 0
    aft = 0
    binary_code = []
    while length_s>1:
        for i in range(0, length_s):
            if s[i] == "0":cnt_0 += 1
            else:aft +=1
        while aft > 1:
            if aft%2 == 1:
                binary_code.append("1")
            else : binary_code.append("0")
            aft = aft//2
            if aft == 1:
                binary_code.append("1")
        binary_code.reverse()
        s = "".join(binary_code)
        length_s = len(s)
        binary_code.clear()
        cnt += 1
        aft = 0
    answer = []
    answer.append(cnt)
    answer.append(cnt_0)
    return answer