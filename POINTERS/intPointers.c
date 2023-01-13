#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    char a = 'A';
    char *ptr = &a;
    
    for(int i=0; i<=2; i++)
    {
        *ptr += i;
    }
    //sets the char value of the pointer to D (just testing)

    unsigned x = 'A'; //(int)65: more bytes to store
    ptr = (char *)&x; //explicits that you're converting uint to char
    // warning if converting uint to pointer!!!
    printf("---Test 1---\n");
    printf("Declared value of x: %u\n", x);
    printf("Adressed value of x to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)&x);

    unsigned y = 'B';
    ptr = (char *)&y;
    printf("---Test 2---\n");
    printf("Declared value of y: %u\n", y);
    printf("Adressed value of y to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)&y);

    *ptr = 'C'; //setting a value to the pointer
    printf("---Test 3---\n");
    printf("Declared value of y: %u\n", a);
    printf("Adressed value of y to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)&y);

    (*ptr)++; //incrementing the value of the new ptr
    printf("---Test 4---\n");
    printf("Declared value of y: %u\n", a);
    printf("Adressed value of y to the pointer: %c\n", *ptr);
    printf("Adress of the data: %llu\n", (uint64_t)&y);

    return EXIT_SUCCESS;
}