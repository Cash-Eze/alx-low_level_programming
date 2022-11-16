#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * pow_recursion - function to raise to power
 * @x: integer numbe to raise
 * @y: integer number raised to
 * Return: The power of x to y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y >= 1)
{
return (1);
}
return (pow(x, y));
}
