#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    long long arr[2];
    arr[0] = 0;
    arr[1] = 1;
    long long temp = 0;
    long long i = 1;
    long long sum = arr[0]+arr[1];
    while(i < n-1)
    {
        temp = arr[1] %1234567;
        arr[1] = (arr[1] %1234567 + arr[0]%1234567)%1234567;
        arr[0] = temp;
        i++;
        sum = (arr[0] +arr[1])%1234567;
        
    }
    return sum;
}