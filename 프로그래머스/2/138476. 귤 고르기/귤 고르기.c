#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int frequency;
    int value;
}item;
int compare_int(const void *a, const void *b);
int compare_item(const void *a, const void *b);
int solution(int k, int tangerine[], size_t tangerine_len)
{
    qsort(tangerine,tangerine_len, sizeof(tangerine[0]), compare_int);
    item * items = malloc((size_t) tangerine_len * sizeof(*items));
    if (items == NULL){return 1;}
    int item_count = 0;
    for (int i = 0; i < tangerine_len; )
    {
        int value = tangerine[i];
        int frequency = 0;
        while (i < tangerine_len && tangerine[i] == value)
        {
            frequency++;
            i++; 
        }
        items[item_count].value = value;
        items[item_count].frequency = frequency;
        item_count++;
    }
    qsort(items, item_count, sizeof(items[0]), compare_item);
    int result = 0;
    int cnt = 0;
    for (int i = 0 ; i<item_count; i++)
    {   
        if (items[i].frequency>=k)
        {   
            result +=1;
            break;
        }
        else
        {
            k-=items[i].frequency;
            result +=1;
        }
    }
    return result;
}
int compare_int(const void *a, const void *b)
{
    int x  = *(int*) a;
    int y  = *(int*) b;
    return (x>y) - (y>x);
}
int compare_item(const void *a, const void *b)
{
    const item * x = a;
    const item * y = b;
    if (x->frequency != y->frequency)
    {
        return (y->frequency > x->frequency) - (x->frequency>y->frequency);
    }
    return (x->value > y->value) - (y->value > x->value);

}