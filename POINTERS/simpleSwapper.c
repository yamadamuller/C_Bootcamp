#include <stdio.h>
#include <stdlib.h>

void simpleSwapper(int *p1, int *p2)
{
    int temp;
    temp = *p2; //avoids overwriting p1 before the swap
    *p2 = *p1;
    *p1 = temp;
}

int main()
{
    int apples = 12;
    int pears = 34;
    
    printf("Before swapping: apples = %d and pears = %d\n", apples, pears);
    simpleSwapper(&apples, &pears);
    printf("After swapping: apples = %d and pears = %d\n", apples, pears);

    return EXIT_SUCCESS;

}