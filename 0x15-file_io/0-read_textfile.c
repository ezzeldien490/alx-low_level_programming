#include "main.h"

/**
 * read_textfile - function prints it to the standard output.
 *
 * @filename: filename.
 * @letters: Number of letters it shoud read and print.
 *
 * Return: 0 or actual number of letters.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	char ch;

	fp = fopen(filename,"r");

	if (fp == NULL)
		return (0);

	while (!feof(fp))
	{
		ch = fgetc(fp);
		_putchar(ch);
	}
	return (letters);
}
