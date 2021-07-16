#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - function pointer to a newly allocated space in memory
* @str: string.
* Return: pointer to the duplicated string. It returns NULL
*/

char *_strdup(char *str)
{
	char *ret;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	;

	ret = (char *)malloc(sizeof(char) * (a + 1));

	if (ret == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		ret[b] = str[b];

return (ret);
}
