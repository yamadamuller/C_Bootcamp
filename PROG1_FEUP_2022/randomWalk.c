#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bridgeSize 7
#define numberExperiments 10
#define stepTolerance 5000

int direction(int i)
{
    int forward = rand()%2; //random integer number between 0 and 1
    if(forward) //rand()%2 is 1
    {
        printf("Forward on iteration: %d\n", i);
        return 1;
    }
    else //rand()%2 is 0
    {
        printf("Backwards on iteration: %d\n", i);
        return -1;
    }
}

int main()
{
    int expSteps, totalSteps, newExp, position, numSteps;

    totalSteps = 0;
    expSteps = 0;

    srand(time(NULL)); //sets the random number seed
    for(int exp = 0; exp < numberExperiments; exp++)
    {
        printf("---Experiment: %d---\n", exp+1);
        position = 0; //center of the road

        for(int steps = 0; steps < stepTolerance; steps++)
        {
            position += direction(steps); //direction of the nth step

            if(abs(position)==4)
            {
                printf("%d steps were necessary\n", steps);
                printf("\n");

                newExp = steps;
                totalSteps += steps;
                break;
            }

            printf("The amount os steps on experiment %d surpassed the accepted amount!\n", exp);
        }

        if(newExp >= expSteps)
        {
            expSteps = newExp;
        }
    }

    float avg = totalSteps/numberExperiments;

    printf("The maximum number os steps in one experiment: %d\n", expSteps);
    printf("The average of steps per experiment: %.2f\n", avg);
    
    return EXIT_SUCCESS;

}