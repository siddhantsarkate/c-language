/*Write a macro to find the largest of 3 numbers (trick will played --> you cannot use if else)*/

#include <stdio.h>
#include <stdint.h>

#define MAX(x, y, z) ((x > y) ? ((x > z) ? x : z) : (y > z) ? y : z)

int main()
{
    printf("MAX = %d", MAX(8, 11, 15));

    return 0;
}
