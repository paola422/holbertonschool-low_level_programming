#include "holberton.h"
/**
* set_string - function that sets the value of a pointer to a char
* @s:pointer to change
* @to:string that changes the pointer
* Return:void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
