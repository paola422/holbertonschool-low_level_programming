#include "main.h"

/**
* read_textfile - Function that reads a text file
* @filename: const char
* @letters: int
* Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t i, c;
	char *size;

	if (!filename)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}
	size = malloc(sizeof(char) * (letters));
	if (!size)
	{
		return (0);
	}
	i = read(n, size, letters);
	c = write(STDOUT_FILENO, size, i);
	close(n);
	free(size);
	return (c);
}

