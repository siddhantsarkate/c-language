/*Do a byte swap ---> current = 0xCC8700FC ---> expected = 0xFC8700CC*/

/*  1. We need to take each byte out
    2. Shift each byte towards left
    3. Add new extracted byte   */

#include <stdio.h>
#include <stdint.h>

uint32_t swapbytes(uint32_t data)
{
    uint32_t output = 0x00; /*variable to store the values*/
    uint8_t temp = 0x00; /*variable to store the extracted byte*/

    /*the operation is to be performed 4 times as per the given data; therefore a loop*/
    for(int i = 0; i < 4; i++)
    {
        /*first we need to do a shift*/
        output = output << 8; // variable shifted by 8 bits
        temp = data >> (8*i) & 0xFF; /*everytime we are shifting it right 8 bits and anding it with 0xFF*/
        output += temp; /*whatever data we are shifting to temp we are adding it to output*/
    }

    return output;
}

int main()
{
    uint32_t input = 0xCC8700FC, output = swapbytes(input);

    printf("Input = 0x%x and Output = 0x%x", input, output);
    
    return 0;
}
