#include "holberton.h"
/**
* _islower - entry point
*
* @c: Character
* Description: Returns 1 if c is lowercase  - returns 0 otherwise
* Return: 0 or 1
*/
int _islower(int c)
{
if (c > 97 && c <= 122)
return (1);
return (0);
}
