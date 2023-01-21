#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define minRows 2
#define maxRows 10
#define minCols 2
#define maxCols 10
#define minUpperLim 2
#define maxUpperLim 1000

void checkStatus(int value, int min, int max)
{
    if(value < min || value > max)
    {
        printf("Out of Bounds!\n");
        exit(0);
    }
}

void randMatrix(int rows, int cols, int matrix[rows][cols], int upperLim)
{
    for(int i=0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % upperLim;
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols], bool transpose)
{
    if(!transpose)
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                printf("%4d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        for(int i = 0; i < cols; i++)
        {
            for(int j = 0; j < rows; j++)
            {
                printf("%4d ", matrix[j][i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
}

int main()
{
    int rows, cols, upperLim;
    printf("Enter the number of rows (min %d and max %d): ", minRows, maxRows);
    scanf("%d", &rows);
    checkStatus(rows, minRows, maxRows);

    printf("Enter the number of columns (min %d and max %d): ", minCols, maxCols);
    scanf("%d", &cols);
    checkStatus(cols, minCols, maxCols);

    printf("Enter the number of upper limit (min %d and max %d): ", minUpperLim, maxUpperLim);
    scanf("%d", &upperLim);
    checkStatus(upperLim, minUpperLim, maxUpperLim);
    
    int randMat[rows][cols];

    srand(time(NULL)); //sets the seed for rand() 
    randMatrix(rows, cols, randMat, upperLim);
    printMatrix(rows, cols, randMat, false); //original
    printMatrix(rows, cols, randMat, true); //transposed
    
    
    return EXIT_SUCCESS;
}