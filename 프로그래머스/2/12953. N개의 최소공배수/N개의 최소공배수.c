#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool run (const void *ptr, size_t length, int answer);

int solution(int arr[], size_t arr_len) {
    bool hasRemainder = 1;
    int answer = 0;
    while(hasRemainder)
    {
        answer++;
        hasRemainder = run(arr, arr_len, answer);
    }
    
    return answer;
}

bool run (const void *ptr, size_t length, int answer)
{
    bool hasRemainder = 1;
    const int *num = ptr;
    for(int i = 0; i < length; i++)
    {
        if(answer  % num[i] == 0)
            hasRemainder = 0;
        else
        {
            hasRemainder = 1;
            break;
        }
    }
    return hasRemainder;
}
