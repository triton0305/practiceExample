#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare_up(const void * a,const void * b);
int compare_down(const void * a, const void * b);
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    qsort(A, A_len, sizeof(int), compare_up);
    qsort(B, B_len, sizeof(int), compare_down);
    for (int j = 0; j<A_len; j++)
    {
        answer += A[j]*B[j];
    }
    return answer;
}
int compare_up(const void * a, const void * b)
{
    return *(int *)a - *(int *)b;
}
int compare_down(const void * a, const void * b)
{
    return *(int *)b - *(int *)a;
}