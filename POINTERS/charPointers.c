#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    char a = 'A';
    char *ptr = &a;

    printf("---Test 1---\n");
    printf("Declared value of a: %c\n", a);
    printf("Adressed value of a to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)ptr);
    //System is 64 bits
    //Adresses are integers, so you need to explicit it in order to print

    char b = 'B';
    char *ptr_2 = &b;

    printf("---Test 2---\n");
    printf("Declared value of b: %c\n", b);
    printf("Adressed value of b to the pointer: %c\n", *ptr_2);
    printf("Adress of the data: %llu\n", (uint64_t)ptr_2);

    *ptr = 'C'; //setting a value to the pointer
    printf("---Test 3---\n");
    printf("Declared value of c: %c\n", a);
    printf("Adressed value of c to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)ptr);

    (*ptr)++; //incrementing the value of the new ptr
    printf("---Test 4---\n");
    printf("Declared value of d: %c\n", a);
    printf("Adressed value of d to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)ptr);

    return EXIT_SUCCESS;
}