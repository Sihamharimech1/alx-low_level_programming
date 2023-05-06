#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int count = 0;
    unsigned long int diff = n ^ m;

    while (diff > 0)
    {
        count += diff & 1;
        diff >>= 1;
    }

    return (count);
}
