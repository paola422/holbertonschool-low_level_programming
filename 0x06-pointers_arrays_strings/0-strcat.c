#include "holberton.h"
/**
*_strcat - function that concatenates two strings
*@dest: destination
*@src: to the end of the string pointed
*Return:destination
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
while (dest[i] != '\0')
i++;
while (*(src))
{
*(dest + i) = *(src);
i++;
src++;
}
return (dest);
}
