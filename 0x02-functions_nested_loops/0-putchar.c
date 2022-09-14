#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
char word[9] = "_putchar";
int i;
for (i = 0; i<10; i++);
{
_putchar(word[i]);
_putchar('\n');
}
_putchar(9);
return (0);
}
