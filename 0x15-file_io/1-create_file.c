#include "main.h"

/**
* create_file - function that creates a file
* @filename: the name of the file to create
* @text_content: terminated string
* Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int a = 0, b = 0, c = 0;

	if (!filename)
	{
		return (-1);
	}

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
	{
		return (-1);
	}
	if (!text_content)
		text_content = "";
	while (text_content[b])
		b++;
	c = write(a, text_content, b);
	if (c == -1)
	{
		return (-1);
	}
	close(a);
	return (1);
}
