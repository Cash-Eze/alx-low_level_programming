#include <stdio.h>
#include "main.h"
int _sqrt(int prev, int root);
/**
 * _sqrt_recursion - a function to return the natural square root of a number
 * @n: integer to return its square root
 * Return: the natural sqrt of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return(-1);
}
if (n > 0)
{
return(_sqrt(1,n));
}
return 0;
}

/**
 *  * _sqrt - find square root
 *   * @prev: previous value
 *    * @root: square root value
 *     * Return: the square root
 *      */
int _sqrt(int prev, int root)
{
if (prev > root)
return (-1);
else if (prev * prev == root)
return (prev);
return (_sqrt(prev + 1, root));
}
