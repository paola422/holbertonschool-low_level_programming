#include "holberton.h"
/**
* *_strpbrk - function that searches a string for any of a set of bytes
* @s: string
* @accept: string
* Return: Pointer to byte in s that matches or NULL if no match
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)

	{

		for (j = 0; *(accept + j); j++)

		{

		if (*(s + i) == *(accept + j))

			return (s + i);

		}
	}

return ('\0');
}
