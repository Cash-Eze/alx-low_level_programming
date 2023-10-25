#include "main.h"
/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flips = 0;

n = n ^ m;
while (n)
{
n &= (n -1);
++b;
}
return (flips);
}
