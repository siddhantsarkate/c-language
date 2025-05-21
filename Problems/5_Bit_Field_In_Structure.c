/*5_Bit_Field_In_Structure*/

#include <stdio.h>
#include <stdint.h>

struct statusofleds
{
    int ld1 : 1;
    int ld2 : 1;
    int ld3 : 1;
    int ld4 : 1;
    int ld5 : 1;
    int ld6 : 1;
    int ld7 : 1;
    int ld8 : 1;
};

int main()
{
    struct statusofleds status1;
    printf("sizeof = %d", sizeof(status1));
    return 0;
}