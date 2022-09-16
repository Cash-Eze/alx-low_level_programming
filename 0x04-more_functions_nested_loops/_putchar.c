#include <unistd.h>
/**
 * _putchar - writes charater c to the stdout
 * @c: charater to print
 * Return: On success 1
 * on error, -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
