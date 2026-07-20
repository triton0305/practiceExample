#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void * a,const void * b);
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    int tem = 0;

    qsort(A, A_len, sizeof(int), compare);
    qsort(B, B_len, sizeof(int), compare);
    for (int i = 0 ; i < (B_len/2); i++)
    {
        tem = B[i];
        B[i] = B[B_len-i-1];
        B[B_len-i-1] = tem;
    }
    for (int j = 0; j<A_len; j++)
    {
        answer += A[j]*B[j];
    }
    return answer;
}
int compare(const void * a, const void * b)
{
    return *(const int *)a - *(const int *)b;
}