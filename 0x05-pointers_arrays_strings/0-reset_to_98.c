#include <stdio.h>
#incude "main.h"
/**
 * reset_to_98 - a function that takes an int and
 * and updates points to 98.
 * @n: integer value
 * @*n: integer pointer
 * Return: Always 0
 */

void reset_to_98(int *n)
{
int n = 98;
int *n = &n;
*n = n;
}
