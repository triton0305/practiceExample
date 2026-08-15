#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long answer = 2;
    long long prev = 1;
    long long temp = 0;
    long long index = 3;
    if (n==1) return prev;
    if (n==2) return answer;
    while (index <= n)
    {   
        temp = answer%1234567;
        answer = (answer%1234567 + prev%1234567)%1234567;
        prev = temp;
        index++;
    }
    
    return answer;
}