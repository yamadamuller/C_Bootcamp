#include <stdio.h>
#include <stdlib.h>

#define rows 3
#define columns 4
#define layers 5

int main()
{
    //n = rows for memory
    int array[rows] = {1, 2, 3};

    //n = rows * columns for memory
    int matrix[rows][columns]=
    {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        [rows-1][columns-1] = -1, //changes the element [2][3] to -1
    }; 

    for(int i=0; i<rows; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}
