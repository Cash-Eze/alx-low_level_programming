#include "main.h"
#include <stdio.h>

/**
 * factorial - function to find factorial of given number
 * @n: integer input to calculate
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
