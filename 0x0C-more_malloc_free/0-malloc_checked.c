nclude "main.h"
#include  <stdio.h>
/**
* malloc_checked - a fuction to allocates memory using malloc
* @b: an unsigned integer
* Return: a pointer to an allocated mem or NULL if fail
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
return (ptr);
}
}
