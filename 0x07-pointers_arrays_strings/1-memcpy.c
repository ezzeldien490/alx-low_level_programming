#include "main.h"

/**
 * _memcpy - copies memory area. 
 *
 * @dest: first array.
 * @src: second array.
 * @n: bytes of memory.
 *
 * Return: pointer dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
