#include "holberton.h"
/**
* _strstr - function that locates a substring
* @haystack: string in which to check for needle
* @needle: substring to find in haystack
* Return: pointer to beginning of needle in haystack or NULL if no matc
*/
char *_strstr(char *haystack, char *needle)
{

	int i = 0;
	int j = 0;

	while (*(haystack + i))

	{

	if (*(haystack + i) == *(needle + j))

		{

			j++;

			if (*(needle + j) == '\0')

				return ((haystack + i) - (j - 1));

		}

		else

			j = 0;

	i++;

	}


	if (*needle == '\0')

		return (haystack);

return (0);

}
