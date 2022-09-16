#include "main.h"
/**
 * _isupper - Checks if a charactet is uppercase
 *
 * @c: charater to be checked
 * Return: 1 if c is uppercase or 0 otherwise
*/

int _isupper(int c)
{
char c = 'A';
if (c <= 65 && c <= 91)
{
return (1);
}
else
{
return (0);
}
}

