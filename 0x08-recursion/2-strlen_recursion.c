#include "main.h"
/**
 * _strlen_recursion - a function to print length of string
 * @s: string to print
 * Return:length of string
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
