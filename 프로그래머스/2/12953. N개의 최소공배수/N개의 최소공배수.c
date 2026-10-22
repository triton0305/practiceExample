#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static size_t answer = 0;

bool run (const void *ptr, size_t length);

int solution(int arr[], size_t arr_len) {
    bool isValid = 1;
    while(isValid)
    {
        answer++;
        isValid = run(arr, arr_len);
    }
    
    return answer;
}

bool run (const void *ptr, size_t length)
{
    bool isValid = 1;
    const int *num = ptr;
    for(int i = 0; i < length; i++)
    {
        if(answer  % num[i] == 0)
            isValid = 0;
        else
        {
            isValid = 1;
            break;
        }
    }
    return isValid;
}
