#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @digit: number
 *
 * Return: 0
 */

int print_last_digit(int digit)
{
	long n;

	if (digit < 0)
	{
		n = -1 * (digit % 10);
	}
	else
	{
		n = digit % 10;
	}
	_putchar(n + '0');

	return (n);
}
