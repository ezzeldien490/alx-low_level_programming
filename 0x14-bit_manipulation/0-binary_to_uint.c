#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if b contain letter or b = NULL.
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, decimal;


	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if(b[len] != '0' && b[len] != '1')
			return (0);
	}
	
	for (i = decimal = 0; i < len; i++)
	{
		decimal = decimal << 1;

		if(b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
