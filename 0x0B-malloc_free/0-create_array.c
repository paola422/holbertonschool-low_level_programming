#include "holberton.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars, and initializes
* @size: size of the array
* @c: char
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)

{

	char *a;
	unsigned int b;


	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(c));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
return (a);

}
