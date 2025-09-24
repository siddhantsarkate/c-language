/* while.c */

#include <stdio.h>
int main()

/******************************* while loop ***********************************/
// {
//     int x;
//     /* types of loops: while , do, for*/
//     while (1) // this means it should always be true
//     {
//         printf("Do you want to quit? Press 1\n");
//         scanf("%d", &x);
//         if (x == 1)
//             break;
//     }

//     printf("Important!\n");

//     return 0; // execution will never reach here, above is the endless loop
// }

/******************************* while loop ***********************************/

{
    int x;
    x = 0; // if we do not explicitly assign this as zero, this will point anywhere in the memory with any value
    while (x != 1) // this means if x is not 1, this should loop
    {
        printf("Do you want to quit? Press 1\n");
        scanf("%d", &x);
    }

    printf("Important!\n");

    return 0; // execution will never reach here, above is the endless loop
}