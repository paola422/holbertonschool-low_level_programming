#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
*@s1: string
*@s2: string
*Return: Null on failure
*/
char *str_concat(char *s1, char *s2)
{

	char *ret;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	ret = malloc(sizeof(char) * (a + b + 1));

	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		ret[c] = s1[c];

	d = b;

	for (b = 0; b <= d; c++, b++)
		ret[c] = s2[b];

return (ret);
}
