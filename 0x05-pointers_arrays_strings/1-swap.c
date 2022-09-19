#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function to swap the values of two integers
 * @*a: pointer of an integer
 * @*b: pointer of an integer
 * a: integer number
 * b: integer number
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int v;
v = *a;
*a = *b;
*b = v;
}

