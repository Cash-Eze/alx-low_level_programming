#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Checks if a charactet is uppercase
 *
 * @c: charater to be checked
 * Return: 1 if uppercase or 0 otherwise
*/

int _isupper(int c)
{
if (c <= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
