#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char *massage = "nd that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, massage, 59);

	return (1);
}
