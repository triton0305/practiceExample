#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) {
    
    int cnt = 0;
    int answer = 0;
    bool isValid = false;
    for(size_t i = 0 ; i <= discount_len - 10 ; i++)
    {
        for(size_t j = 0; j < want_len ; j++ )
        {
            const char *name = want[j];
            for(int k = i; k < i+10 ; k++)
            {
                if(strcmp(name,discount[k])==0)
                    cnt++;
            }
            if(j == want_len-1 && cnt == number[j])
                isValid = true;
            if(cnt==number[j])
                cnt = 0;
            else
            {
                cnt = 0;
                break;
            }
        }
        if(isValid)
        {
            answer++;
            isValid = false;
        }
    }
    return answer;
}
