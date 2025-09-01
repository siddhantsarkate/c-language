/*name.c*/

#include <stdio.h>

int main()
{
    char name[16]; // always create variable at the start of the program
    printf("Hello, what is your name?\n");
    scanf("%s", name); // never use this function in production code, its not safe, %s is for string
    printf("Hello, %s \n", name);
    
    return 0;
}