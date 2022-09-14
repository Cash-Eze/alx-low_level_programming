#include "main.h"
/**
 * print_sign - printing the sign of number
 * @n: number to check
 * Return: 1 if it is positive, 0 if it is zero and -1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar("+");
}
else if (n == 0)
{
return (0);
_putchar("0");
}
else
{
return (-1);
_putchar("-1")
}
}

