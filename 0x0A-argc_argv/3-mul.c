#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * mult - a function to multiply two numbers
 * @argc:  argument counter
 * @argv: argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int num1, num2, result;

if (argv != 3)
{

printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
}
