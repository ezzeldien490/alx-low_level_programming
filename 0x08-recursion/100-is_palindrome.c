#include "main.h"

/**
 * len - find lenght of string.
 *
 * @s: string.
 *
 * Return: i.
*/
int len(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i++;
		return (i + len(s + 1));
	}
	return (i);
}

/**
 * check_palindrome - check string is pallindrome or not.
 *
 * @s: string for check.
 * @l: length of string.
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not.
*/
int check_palindrome(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	else if (*s != s[l - 1])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s + 1, l - 2));
	}
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string for check.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
*/

int is_palindrome(char *s)
{
	int l;

	l = len(s);

	if (l <= 1)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, l));
	}


}
