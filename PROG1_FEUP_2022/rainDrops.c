#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rainDrops 10000000

double between0and1()
{
    return (double)rand()/RAND_MAX;
}

int inCircle(double x, double y)
{
    if(x*x+y*y<=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double x,y;
    int newExperiments;
    int hits = 0; //raindrops in the 1st quadrant

    printf("State the number os experiments (#drops = %d): ", rainDrops);
    scanf("%d", &newExperiments);

    srand(time(NULL)); //sets the random number seed

    for(int i = 0; i < newExperiments; i++)
    {
        hits = 0;

        for(int j = 0; j < rainDrops; j++)
        {
            x = between0and1();
            y = between0and1();
            hits += inCircle(x,y);
        }

        double pi = (double)hits/rainDrops*4;
        printf("Experiment (#drops = %d): %d\n", rainDrops, i);
        printf("Estimated value for pi: %.6f\n", pi);

    } 

    return EXIT_SUCCESS;
}