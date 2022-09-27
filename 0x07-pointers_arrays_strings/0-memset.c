#include "main.h"
/**
 * _memset() - function to fill the memory area pointed to
 * @s: memory location
 * @b: constant char to fill
 * @n: number of bytes:
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{

char *aux = s;

while (n--)
{
*s = b;
s++;
}
return (aux);
}

