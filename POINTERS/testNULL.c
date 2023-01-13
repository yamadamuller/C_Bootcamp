#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int *ptr = NULL; //interpreted as ((void *)0)
    int someValue = 21;

    if(ptr == NULL) //if(!ptr)
    {
        ptr = &someValue; 
        printf("Pointed value is NULL, new value adressed: %d\n", *ptr);
        printf("Adress of someValue variable: %llu", (uint64_t)ptr);
    }
    else
    {
        printf("Pointed value is not NULL: %d\n", *ptr);
    }

    return EXIT_SUCCESS;
}