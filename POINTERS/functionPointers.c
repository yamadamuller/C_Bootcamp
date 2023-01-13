#include <stdio.h>
#include <stdlib.h>

int accumulate(int *accumulator, int value)
{
    if(value > 0)
    {
        *accumulator += value; //accessing an external value from the function
        return 0;
    }
    else
    {
        return -1;
    }
}

void accumulateWrapper(int *accumulator, int value)
{
    if (accumulate(accumulator, value) != 0)
    {
        printf("Warning! Value = %d\n", value);
    }
}

int main()
{
    int class_1 = 28, class_2 = 19, class_3 = -1;
    int accumulator = 0;

    accumulateWrapper(&accumulator, class_1);
    accumulateWrapper(&accumulator, class_2);
    accumulateWrapper(&accumulator, class_3); //should print the Warning!
    
    printf("Accumulator = %d\n", accumulator);
    return 0;
}