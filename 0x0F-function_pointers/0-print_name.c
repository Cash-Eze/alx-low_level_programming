#include "_MAIN.H"
#include <stdio.h>

/**
 * print_name - a function to print a name
 * @name: name function that contains name
 * Return: Nothing
 */

void print_name(char *name,void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
