/* float.c */
#include <stdio.h>

// int main()
// {
//     //area
//     //radius * radius * PI
//     float radius, pi, area;

//     pi = 3.14;
//     printf("What is the radius in cm?\n");
//     scanf("%f", &radius);
//     area = radius * radius * pi;
//     printf("The area of the circle is %f cm\n", area);
//     return 0;
// }

int main()
{
    //area of triangle
    float height, width, area;

    printf("What is the height in cm?\n");
    scanf("%f", &height);
    printf("What is the width in cm?\n");
    scanf("%f", &width);
    area = height * width / 2;
    printf("The area of the triangle is %f cm\n", area);
    return 0;
}