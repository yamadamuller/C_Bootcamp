#include <stdio.h>
#include <stdlib.h>

int cumSum(int limit)
{
    int result = 0;
    for(int i=0; i<=limit; i++)
    {
        result += i;
    }
    return result;
}

int main()
{
    int number, factor;

    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("Enter an integer factor: ");
    scanf("%d", &factor);

    printf("Number before multiplication: %d\n", number);

    number *= factor;
    printf("Number after multiplication: %d\n", number);

    int cum = cumSum(number);
    printf("cumSum of %d: %d\n", number, cum);

    return EXIT_SUCCESS;
}