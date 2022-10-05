#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function to create an arrays of chars
 * @c: character to enter
 * @size: size of memory to allocate
 * Return: *check_array(checkarray[]) or NULL
 */

char *create_array(unsigned int size, char c)
{
char *s;
int i;
s =(char*) malloc(size * sizeof(char));
if (s ==  NULL)
{
printf("memory not allocated");
exit(0);
}
if (size == 0)
{
return (NULL);
}
while (i < size)
{
s[i] = c;
i++;
}
return (s);

}
