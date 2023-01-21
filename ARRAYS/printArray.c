#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define len 10

void forPrint(int *array, int size)
{
    for(int i2=0; i2<size; i2++)
    {
        printf("%d ", array[i2]);
    }
    printf("\n");
    printf("Array printed using the for loop\n");
    
    int ticks = clock();
    printf("%f[ms] elapsed in the for loop", 1e3*(float)ticks/CLOCKS_PER_SEC);
}

void recursivePrint(int *array, int size, int elem0)
{
    if(elem0 >= size)
    {
        printf("\n");
        printf("Array printed using the recursive function\n");

        int ticks = clock();
        printf("%f[ms] elapsed in the recursion", 1e3*(float)ticks/CLOCKS_PER_SEC);

        return;
    }
    printf("%d ", array[elem0]);
    
    recursivePrint(array, size, elem0+1);
}

int main()
{
    int array[len] = {0};
    int size;

    for(int i=0; i<len;i++)
    {
        array[i] = i;
    }
    size = sizeof(array)/sizeof(array[0]);

    forPrint(array, size);
    recursivePrint(array, len, 0);
}