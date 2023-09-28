#include "main.h"
#include <unistd.h>

/**
 * _putchar - print one character.
 *
 * @c: character will ber checked.
 *
 * Return: write(1, %c ,1)
*/

int _putchar(char c)
{
	return (write(1, &c ,1));
}
