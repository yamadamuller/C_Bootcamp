//algoritmo de ordenação por seleção
#include <stdio.h>
#include <stdlib.h>

#define len 7

void arrayPrint(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//minha solução
void selecSort(int *random, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = size - 1; j > i; j--)
        {
            if(random[j]<random[i])
            {
                int newMin = random[j];
                random[j] = random[i];
                random[i] = newMin;
            }
        }
    }

    arrayPrint(random, size);
}

//solucao apresentada em aula pelo professor
void ordena(int v[ ], int n){
int passo = 0, imin, i, aux;
while (passo < n - 1) {
imin = passo;
i = passo + 1;
while (i < n){ /* procura menor */
if (v[i] < v[imin]) imin = i;
i++; }
if (imin != passo) { /* troca elementos */
aux = v[passo];
v[passo] = v[imin];
v[imin] = aux;
}
passo++;
}
arrayPrint(v, n);
}

int main()
{
    int unsorted[len] = {17, 3, 31, 9, -3, 35, 10};
    int size = sizeof(unsorted)/sizeof(unsorted[0]);

    selecSort(unsorted, size);
    //ordena(unsorted, size);

    return EXIT_SUCCESS;
}