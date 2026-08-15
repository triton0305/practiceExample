#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
void circular (char * data, size_t size, size_t x);
bool countChar(char * data, size_t size);
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    if (strlen(s)==1) return 0;
    size_t size = strlen(s);
    char*data = NULL;
    data = malloc((size+1)*sizeof(*data));
    if(data == NULL) return 1;
    size_t x = 0;
    int answer = 0;

    while(x<size)
    {
        strcpy(data, s);
        circular(data , size, x);
        answer += countChar(data, size);
        x++;
    }
    free(data);
    return answer;
}

void circular (char * data, size_t size, size_t x)
{   
    if(x==0) return;
    x = x % size;
    char *s = malloc(sizeof(*s)*x);
    if (s == NULL) return;
    for (size_t i = 0 ; i < x ; i ++)
    {
        s[i] = data[i];
    }
    for (size_t i = 0 ; i <size - x  ; i ++)
    {
        data[i] = data[x+i];
    }
    for (size_t i = 0 ; i < x ; i ++)
    {
        data[size - (x-i)] = s[i];
    }
    free(s);
}

bool countChar (char * data , size_t size)
{
    char*arr = malloc(size*sizeof(*arr));
    if(arr==NULL) return false;
    size_t index =0;

    for (size_t i = 0 ; i < size ; i ++)
    {
        if(data[i]=='(') 
        {
            arr[index] = '(';
            index++;
        }
        else if(data[i]=='{')
        {
            arr[index] = '{';
            index++;
        }
        else if(data[i]=='[')
        {
            arr[index] = '[';
            index++;
        }
        else if(data[i]==')')
        {
            if(index==0)
            {
                free(arr);
                return false;
            }
            index--;
            if(arr[index]!='(')
            {
                free(arr);
                return false;
            }
        }
        else if(data[i]=='}')
        {
            if(index==0)
            {
                free(arr);
                return false;
            }
            index--;
            if(arr[index]!='{')
            {
                free(arr);
                return false;
            }
        }
        else if(data[i]==']')
        {
            if(index==0)
            {
                free(arr);
                return false;
            }
            index--;
            if(arr[index]!='[')
            {
                free(arr);
                return false;
            }
        }
    }
    free(arr);
    if(index == 0) return true;
    return false;
}