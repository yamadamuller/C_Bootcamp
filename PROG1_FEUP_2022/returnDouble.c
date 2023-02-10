//testando a funcionalidade de retornar mais de um valor por função
//no caso o programa irá receber um float e decompor int + decimais

#include <stdio.h>
#include <stdlib.h>

void decompose(float input, int *varINT, float *varFLOAT)
{
    *varINT = (int) input;
    *varFLOAT = input - (int) input;
}

int main()
{
    float input, fLOAT;
    int iNT;

    printf("Digite um numero de ponto flutuante: ");
    scanf("%f", &input);

    decompose(input, &iNT, &fLOAT);
    printf("Parte inteira: %d\n", iNT);
    printf("Parte decimal: %f\n", fLOAT);

    return EXIT_SUCCESS;

}