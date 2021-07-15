#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated space in memory
* @str: string.
* Return: pointer to the duplicated string. It returns NULL
*/

char *_strdup(char *str)
{

	char *s;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	s = malloc(a * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		s[b] = str[b];
	}
return (s);
}
