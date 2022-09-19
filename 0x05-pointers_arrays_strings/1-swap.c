#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function to swap the values of two integers
 * @*a: pointer of an inout integer
 * @*b: pointer of an input integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int v;

v = *a;
*a = *b;
*b = v;
}

