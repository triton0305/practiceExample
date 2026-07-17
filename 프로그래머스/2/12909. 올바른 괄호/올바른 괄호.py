def solution(s):
    index = 0
    number = 0
    while index < len(s):
        if number < 0 : return False
        elif s[index] == '(':
            number+=1
            index+=1
        elif s[index] == ')':
            number-=1
            index+=1
    return number==0