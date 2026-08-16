#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int countSec(int* prices, int index, size_t prices_len);

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = malloc(prices_len*sizeof(*answer));
    //if (answer == NULL) return 1;
    for (int index = 0; index < prices_len; index ++)
    {
        answer[index] = countSec(prices, index, prices_len);
    }
    
    return answer;
}

int countSec(int * prices, int index, size_t prices_len)
{
    int cnt = index+1;
    int answer = 0;
    while((int)prices_len>cnt)
    {
        answer ++;
        if(prices[index]>prices[cnt]) break;
        cnt ++;
    }
    
    return answer;
}