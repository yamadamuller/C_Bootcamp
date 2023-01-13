#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 5;
    for(i, j; i < j; i++, j--)
    {
        printf("i = %d\n", i);
        printf("j = %d\n", j);
    }
    
    printf("i (after loop) = %d\n", i);
    printf("j (after loop) = %d\n", j);

    return EXIT_SUCCESS;
}