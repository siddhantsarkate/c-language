/*Swap two numbers without using any extra variables*/

/*Example:
b = 4 and a = 6; then
a = a + b; --> 10
b = a - b; --> 6
a = a - b; --> 4*/

#include <stdio.h>
#include <stdint.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 8, b = 77;
    swap(&a, &b);
    printf("a = %d b = %d", a, b);
    return 0;
}