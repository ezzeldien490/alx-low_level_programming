#include "main.h"

/**
 * sqrt_check - Find the square root
 * @n: Number to find square root of
 * @l: The number checked to see if it's the sqrt of n
 *
 * Return: The square root value
 */
int sqrt_check(int n, int l)
{
	if  (l * l == n)
	{
		return (l);
	}
	else if (l >= n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, l + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: num.
 *
 * Return: -1 if don't have natural square root, n if else.
*/

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, 1));
	}
}
