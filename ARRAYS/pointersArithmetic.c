#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define arr_len 10

int sum_arr(int *arr, int len)
{
    int sum = 0;
    for(int i=0; i<len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sum_ptr(int *p, int len)
{
    int sum = 0;
    for(int *p_item = p; p_item < p + len; p_item++)
    {
        sum += *p_item;
    }
    return sum;
}

int main()
{
    int x[arr_len] = {1, 4, -3, 2};
    printf("sum of the elements of the array: %d\n", sum_arr(x, arr_len));
    printf("sum of the elements of the array: %d\n", sum_ptr(x, arr_len));


    return EXIT_SUCCESS;
}