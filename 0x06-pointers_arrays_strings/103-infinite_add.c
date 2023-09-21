#include <stdio.h>
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
	int start;
	int carry = 0;
	int k = 0;

	if (len1 > size_r || len2 > size_r)
	{
		return (0);
	}


	for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, k++)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		r[k] = sum % 10 + '0';
		carry = sum / 10;
		j--;
	}

	if (k >= size_r)
	{
		return (0);
	}

	r[k] = '\0';

	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
