
#include "holberton.h"
/**
* reverse_array - function that reverses the content of an array of integers
* @*a: content
* @a: content
* @n: number of elements of the array
* Return:
*/

void reverse_array(int *a, int n)
{
	int b;
	int c;
	int d;

	if (n % 2 != 0)
	{
		d = n + 1;
	}
	else
	{
		d = n;
	}
	for (b = 0; b < d / 2; b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}


