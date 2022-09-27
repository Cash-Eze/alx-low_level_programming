#include "main.h"
/**
 * _memcpy - a function to copy n bytes 
 * @src: a memory location
 * @dest: another memory location
 * @n: number of bytes 
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;

while (n--)
{
*dest = src;
dest++;
}
return (start);
}

