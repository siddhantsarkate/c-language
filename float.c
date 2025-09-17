/* float.c */
#include <stdio.h>

int main()
{
    //area
    //radius * radius * PI
    float radius, pi, area;

    pi = 3.14;
    printf("What is the radius in cm?\n");
    scanf("%f", &radius);
    area = radius * radius * pi;
    printf("The area of the circle is %f cm\n", area);
    return 0;
}