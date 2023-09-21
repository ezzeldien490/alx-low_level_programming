#include "main.h"
#include <string.h>

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 > size_r || len2 > size_r)
	{
		return (0);
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		i--;
		j++;
		k++;
		if (k >= size_r)
		{
			return (0);
		}
	}
	for (int start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}

	r[k] = '\0';
	return (r);
}
