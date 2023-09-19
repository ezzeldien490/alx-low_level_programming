#include "main.h"

/**
 * _strcpy - copies the string.
 *
 * @dest: first stringe.
 *
 * @src: second stringe.
 *
 * Return: dest poitner.
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do  
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
