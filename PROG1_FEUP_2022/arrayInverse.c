//Programa que monta um vetor somente com inteiros positivos
//ao ser introduzido -1
//print do vetor
//print em ordem inversa em um novo vetor

#include <stdio.h>
#include <stdlib.h>

#define len 10

void arrayPrint(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void arrayInverse(int *array, int size)
{
    printf("Vetor invertido:\n");

    int invArray[size];
    for(int i = size - 1; i >= 0; i--)
    {
        invArray[size-i-1] = array[i];
    }

    int invSize = sizeof(invArray)/sizeof(invArray[0]);
    arrayPrint(invArray, invSize);
}

int main()
{
    int nthElem;
    int nArray[len] = {0};

    for(int i = 0; i < len; i++)
    {
        printf("Enter an positive integer for x[%d]: ", i);
        scanf("%d", &nthElem);
        
        if(nthElem == -1)
        {
            break;
        }
        else
        {
            nArray[i] = nthElem;
        }
    }

    printf("Vetor normal: \n");
    int arraySize = (int) sizeof(nArray)/sizeof(nArray[0]);
    arrayPrint(nArray, arraySize);
    arrayInverse(nArray, arraySize);

    return EXIT_SUCCESS;
}