#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double operandA, operandB, result;

    printf("Enter operator (char): ");
    scanf("%c", &operator);
    printf("Enter operand A (float): ");
    scanf("%lf", &operandA);
    printf("Enter operand B (float): ");
    scanf("%lf", &operandB);
    printf("\n");

    int error = 0;

    switch (operator)
    {
        case '+':
            result = operandA + operandB;
            break;
        case '-':
            result = operandA - operandB;
            break;
        case '*':
            result = operandA * operandB;
            break;
        case '/':
            result = operandA / operandB;
            break;
        default:
            error = 1;
            break;
    }

    if (error)
    {
        printf("Unknown operator\n");
    }
    else
    {
        printf("%.3f %c %.3f = %.3f",operandA,operator,operandB,result);
    }

    return EXIT_SUCCESS;
}