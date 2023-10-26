#include "main.h"

/**
 * binary_to_uint - Convert a string representing a binary number to an
 * unsigned int decimal value
 * @b: The string containing the binary
 *
 * Return: 0 if string contains something other than 1 or 0, or
 * if the string is NULL, return the decimal value on success
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, decval = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (i = 0; i < len; i++)
	{
		decval = decval << 1;
		if (b[i] == '1')
			decval += 1;
	}
	return (decval);
}
