#include "holberton.h"
/**
* *_strchr - function that locates a character in a string
* @s: string
* @c: character
* Return: Pointer to spot in s with c or NULL
*/
char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; *(s + i); i++)

	{

	if (*(s + i) == c)
		return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

return ('\0');
}
