/*Write Set and Reset Logic for a 32 bit variable*/

/* What we have to do
In this you have a certain set of bits eg: 10011001 -> control word
In this you have to set the 3rd bit, so it should become --> 10011101
And in Control word reset the 4th bit, so it should become --> 10010101 */

/*Solution
This should have one function that will take whatever control word we give and the bit number we give, which we want to
set or reset, and then that function will return that set/reset value*/

/*How to we acheive this set operation?
Which ever bit you want to set, put 1 in that position and perform OR operation with it.
-> 10011001
OR      1  
   10011101
so for the above operation we will do --> 1 << 2(number of position you need the value at)*/

/*How to we acheive this reset operation?
Which ever bit you want to set, put 1 in that position; take complement of that number and perform AND operation with it.
->  10011101
AND 11110111  
    10010101
so for the above operation we will do --> 1 << 3(number of position you need the value at)*, so 1000 -> complement -> 0111 (8bits)*/

#include <stdio.h>
#include <stdint.h>

uint32_t setbit(uint32_t data, uint8_t bitno)
{
    data |= 1<<bitno;
    return data;
}

uint32_t resetbit(uint32_t data, uint8_t bitno)
{
    data &= ~(1<<bitno);
    return data;
}

int main()
{
    // uint32_t input = 7, output = setbit(input, 3); /*7 = 0111 --> set (3rd bit) --> 1111 = F*/
    uint32_t input = 7, output = resetbit(input, 2); /*7 = 0111 --> reset (2nd bit) --> 0011 = 3*/
    printf("Input = 0x%x and Output = 0x%x", input, output);
    return 0;
}
