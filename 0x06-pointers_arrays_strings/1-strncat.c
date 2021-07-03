#include "holberton.h"
/**
**_strncat - function that concatenates two strings.
*@dest: String that receives
*@src: String
*@n: Number of bytes
*Return: Dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dlen, slen;
for (dlen = 0; dest[dlen] != '\0'; dlen++)
;
for (slen = 0; slen < n && src[slen] != '\0'; slen++)
dest[dlen + slen] = src[slen];
return (dest);
}
