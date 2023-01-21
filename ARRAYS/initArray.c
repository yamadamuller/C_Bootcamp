#include <stdio.h>
#include <stdlib.h>

#define LEN 5 //varibles cannot be used with brace-initialization

int main()
{
    //initializing an array with pre-defined length
    int a_0[LEN]; //contains unpredictable values

    for(int i=0; i < LEN; i++)
    {
        a_0[i] = 1;
    }
    
    //initializing an array from brace-enclosed lists
    int a_1[] = {1, 2, 3, 4, 5};
    int a_2[LEN] = {1, 2, 3}; //a_2[5] = 1, 2, 3, 0, 0
    int a_3[LEN] = {0}; //a_3[5] = 0, 0, 0, 0, 0 

    //intializing a sparse array (designators)
    int a_4[LEN] = {[1] = 1, [3] = 1}; //a_4[5] = 0, 1, 0, 1, 0
    int a_5[LEN] = {[1] = 3, [LEN-1] = 5}; //a_5[5] = 0, 3, 0, 0, 5
    int a_6[10] = {[0] = 5, 4, [LEN-3] = 3, 2, 1}; //a_6[10] = 5, 4, 0, 0, 0, 0, 0, 3, 2, 1

    return EXIT_SUCCESS;
}