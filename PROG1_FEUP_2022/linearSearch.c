//algoritmo de busca linear
#include <stdio.h>
#include <stdlib.h>

#define len 5

int linSearchFirst(int *searchArray, int value, int size, int *ptr)
{
    for(*ptr = 0; *ptr < size; (*ptr)++)
    {
        int iterValue = searchArray[*ptr];
        if(iterValue == value)
        {
            return 1;
        }
    }
}

void linSearchMult(int *searchArray, int value, int size, int *ptr)
{
    for(*ptr = 0; *ptr < size; (*ptr)++)
    {
        int iterValue = searchArray[*ptr];
        if(iterValue == value)
        {
            printf("The searched number can be found at: array[%d]\n", *ptr);
        }
    }
    printf("\n");
}

int main()
{
    int pos;
    int array[len] = {2, 7, -3, 5, -3};
    int size = sizeof(array)/sizeof(array[0]);

    //first occurrance
    if(linSearchFirst(array, -3, size, &pos)) 
    {
        printf("The first occurrance can be found at: array[%d]\n", pos);
    }

    //multiple occurrances
    linSearchMult(array, -3, size, &pos);

    return EXIT_SUCCESS;
}