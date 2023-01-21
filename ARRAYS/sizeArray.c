#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5}; 
    int8_t array2[] = {1, 2, 3, 4, 5};

    long long unsigned sizeBytes = sizeof(array);
    long long unsigned sizeElements = sizeof(array2);

    printf("Size of the array in bytes: %llu\n", sizeBytes); 
    printf("Size of the array in elements: %llu\n", sizeBytes/sizeof(array[0]));
    printf("Size of the array2 in elements: %llu\n", sizeElements);

    return EXIT_SUCCESS;
}