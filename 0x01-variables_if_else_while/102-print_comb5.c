#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digit2, digit3, digit4;

	while (digit1 <= 9)
	{
		digit2 = 0;

		while (digit2 <= 9)
		{
			digit3 = digit1;

			while (digit3 <= 9)
			{
				digit4 = digit2++;

				while (digit4 <= 9)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');
					putchar(digit3 + '0');
					putchar(digit4 + '0');

					if ((digit1 + digit2 + digit3 + digit4) != 35)
					{
						putchar(',');
						putchar(' ');
					}

					digit4++;
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
