//algoritmo de busca linear
#include <stdio.h>
#include <stdlib.h>

#define len 5

void arrayPrint(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void linSearch(int *searchArray, int value, int size, int *ptr, int *occurrance)
{
    for(*ptr = 0; *ptr < size; (*ptr)++)
    {
        int iterValue = searchArray[*ptr];
        if(iterValue == value)
        {
            occurrance[*ptr] = 1;
        }
    }
}

int main()
{
    int pos;
    int array[len] = {2, 7, -3, 5, -3};
    int arrayFindings[len] = {0};

    int size = sizeof(array)/sizeof(array[0]);
    linSearch(array, -3, size, &pos, arrayFindings);
    arrayPrint(arrayFindings, size);

    return EXIT_SUCCESS;
}