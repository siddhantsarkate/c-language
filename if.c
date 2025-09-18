/* if.c */

#include <stdio.h>

int main()
{
    // int x;
    // x = 5;

    // if (x == 5)
    // {
    //     printf("Is is five\n");
    // }

    int velocity;

    printf("How fast are you driving in km/h?\n");
    scanf("%d", &velocity);

    if (velocity > 100)
    {
        printf("You are driving too fast!\n");
    }

    else if (velocity > 80)
    {
        printf("You are driving safely!\n");
    }
    
    else
    {
        printf("OK!\n");
    }
    
    return 0;
}