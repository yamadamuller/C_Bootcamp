//Estrutura de controle para imprimir no console
//    #
//   ##
//  ###  
// ####  
//#####

#include <stdio.h>
#include <stdlib.h>

#define LEN 5;

int main()
{
    const char symbol = '#';
    const int largBase = 5;

    for(int i = largBase; i > 0; i--)
    {
        for(int j = 1; j <= largBase; j++)
        {
            if(j>=i)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return EXIT_SUCCESS;
}