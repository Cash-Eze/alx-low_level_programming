#include "main.h"

/**
 * _isupper - is a function to check if input is upper
 *
 * @c: The input character
 * Reaturn: 1 if c is upper or 0 if otherwise
 *
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if ( c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
