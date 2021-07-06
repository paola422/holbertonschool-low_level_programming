#include "holberton.h"
/**
* *_memcpy - function that copies memory area
* @dest: copies
* @src: copies
* @n: copies bytes
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
return (dest);
}
