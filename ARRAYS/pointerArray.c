#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void elemAccess(int *array, int size)
{
    for(int i=0; i < size; i++)
    {
        int *p = &array[i];
        printf("through pointer: elem. [%d] = %d\n", i, *p);
    }
}

void arrayAccess(int *array)
{
    printf("Adress of first elem.: %llX\n", (uint64_t) &array[0]);
    printf("Printing the array:    %llX\n", (uint64_t) array);
}

int main()
{
    int array[] = {9, 8, 7, 6, 5};
    long long unsigned size = sizeof(array)/sizeof(array[0]);

    elemAccess(array,size);
    arrayAccess(array);

    return EXIT_SUCCESS;
}