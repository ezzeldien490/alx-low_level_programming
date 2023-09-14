#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143, d, f;
	 d = 3;
	 f = 0;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;

			if (d > f)
			{
				f = d;
			}
		}
		else
		{
			d++;
		}
	}
	printf("%ld\n", f);
	return (0);
}
