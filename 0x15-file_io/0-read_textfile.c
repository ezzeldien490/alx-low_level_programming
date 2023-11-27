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
	size_t i;

	fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
		return (0);

	for (i = 0; !feof(fp) && i < letters; i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	if (i == letters)
		return (letters);

	return (i - 1);
}
