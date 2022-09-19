#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - a function to get the length of a string
 * @*s: string to be passed
 * Return: Nothing
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

