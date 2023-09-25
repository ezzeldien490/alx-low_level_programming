#include "main.h"

/**
 * _strstr - Find first occurence of given string in another string
 * @haystack: String to search through
 * @needle: String to search for
 *
 * Return: Pointer to beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *m;

	for (; *haystack != 0; haystack++)
	{
		h = haystack;
		m = needle;
		for (; *h == *m && *h != '\0' &&
				*m != '\0'; m++, h++)
		{}
		if (*m == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
