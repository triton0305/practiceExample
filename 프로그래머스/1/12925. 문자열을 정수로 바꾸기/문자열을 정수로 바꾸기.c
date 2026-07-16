#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int l=strlen(s);
    if (s[0]=='-')
    {
                for (int i = 1 ; i < l ; i++)
            {
                int k = s[i] - '0';
                answer = answer*10 + k;
            }
        answer = answer - (2*answer);
    }
    else if (s[0]=='+')
    {
        
            for (int i = 1 ; i < l ; i++)
        {
            int k = s[i] - '0';
            answer = answer*10 + k;
        }
    }
    else
    {
            for (int i = 0 ; i < l ; i++)
        {
            int k = s[i] - '0';
            answer = answer*10 + k;
        }
    }
    
    return answer;
}