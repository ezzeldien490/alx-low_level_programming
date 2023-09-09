#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit = '0';

	while (digit <= 'f')
	{
	if ((digit >= '0' && digit <= '9') || (digit >= 'a' && digit <= 'f'))
	{
		putchar(digit);
		}
	digit++;
}

	putchar('\n');

	return (0);
}
