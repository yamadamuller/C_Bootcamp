#include <stdio.h>
#include <stdlib.h>

void arrayMaker(int len)
{
    int varLen[len];
    for(int i = 0; i < len; i++)
    {
        varLen[i] = i;
    }

    for(int p = 0; p < len; p++)
    {
        printf("%d ", varLen[p]);
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int len;
        printf("Enter the length of the array: ");
        scanf("%d", &len);

        if(len < 1)
        {
            break;
        }
        else
        {
            arrayMaker(len);
        }
    }
}