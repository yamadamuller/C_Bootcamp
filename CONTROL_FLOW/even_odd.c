#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("The number %d is even\n", number);
    }
    else
    {
        printf("The number %d is odd\n", number);
    }

    return EXIT_SUCCESS;
}