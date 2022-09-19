#include "main.h"
#include <stdio.h>
/**
 * _puts - a function that prints a string
 * @*str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_puts(str[i]);
i++;
}
_puts("\n");
}
