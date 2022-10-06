#include "main.h"
#include <stdio.h>

/**
 * mult - a function to multiply two numbers
 * @argc:
 * @argv:
 *
 * Return: 1 
 */

int main(int argc, char *argv)
{
int num1, num2, result;
int mult = num1 * num2;
result = mult;

if (argv != 3){

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
