#include "main.h"

/**
* append_text_to_file - Function that appends text at the end of a file.
* @filename: the name of the file 
* @text_content: terminated string
* Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0, b = 0, c = 0;

	if (!filename)
	{
		return (-1);
	}
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[b])
			b++;
		c = write(a, text_content, b);
		if (c == -1)
			return (-1);
	}
	close(a);
	return (1);

}
