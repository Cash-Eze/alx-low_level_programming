#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function to return the natural square root of a number
 * @n: integer to return its square root
 * Return: the natural sqrt of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return(-1);
}
if (n > 0)
{
return(sqrt(n));
}
return 0;
}
