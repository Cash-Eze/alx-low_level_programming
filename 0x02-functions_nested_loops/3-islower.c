#include "main.h"
#include "main.c"
/**
 * _islower - checks if a character is lowercase or not
 * @c: Integer representing ascii
 * Return: 1 or 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

