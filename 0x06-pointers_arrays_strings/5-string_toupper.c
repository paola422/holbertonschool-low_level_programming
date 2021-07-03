#include "holberton.h"
/**
* *string_toupper - function that changes all lowercase letters
* @char *: Data
* @s: print data
* Return: String toupper
*/

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] >  90 && s[a] != 10)
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
