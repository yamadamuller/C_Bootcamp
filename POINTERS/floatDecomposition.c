#include <stdio.h>
#include <stdlib.h>

void decompose(float number, int *int_part, float *frac_part)
{
    *int_part = (int) number;
    *frac_part = number - *int_part;
}

int main()
{
    int int_part;
    float frac_part, input;

    printf("Input a float: ");
    scanf("%f", &input);
    decompose(input, &int_part, &frac_part);
    printf("Integer part of %.2f: %d\n", input, int_part);
    printf("Fractional part of %.2f: %.2f\n", input, frac_part);

    float reconst = int_part + frac_part;
    printf("Reconstructed number: %.2f\n", reconst);

    return EXIT_SUCCESS;
}