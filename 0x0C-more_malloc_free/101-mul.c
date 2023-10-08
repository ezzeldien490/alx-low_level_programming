#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>
/**
 * main - pritn finlay.
 *
 * @argc: argument count.
 * @argv: argument value.
 *
 * Return: ..
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int temp;
	int digits;
	int digit;
	int i;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}


	if (!isDigitsOnly(argv[1]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	num1 = atoi(argv[1]);
	if (num1 <= 0 || errno == ERANGE)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	if (!isDigitsOnly(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	num2 = atoi(argv[2]);
	if (num2 <= 0 || errno == ERANGE)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	result = multiply(num1, num2);
	temp = result;
	digits = 0;

	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			digit = (result / (int)pow(10, i)) % 10;
			_putchar(digit + '0');
		}
	}

	_putchar('\n');

	return (0);
}

/**
 * multiply - multiply two number.
 *
 * @num1: number one.
 * @num2: number two.
 *
 * Return: ..
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isDigitsOnly -  check digit.
 *
 * @str: character.
 *
 * Return: ..
 */

int isDigitsOnly(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

