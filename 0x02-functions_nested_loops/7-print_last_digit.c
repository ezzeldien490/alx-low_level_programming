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
	if (digit < 0)
	{
		digit = -1 * (digit % 10);
	}
	else
	{
		digit = digit % 10;
	}
	_putchar(digit + '0');

	return (digit);
}
