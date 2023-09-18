#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 *
 * @s: pinter.
 *
 * Return: a.
*/

int _strlen(char *s)
{
	char b;
	int a;

	for (a = 0; b != '\0'; a++)
	{
		b = s[a];
	}
       a--;	
	return (a);
}
