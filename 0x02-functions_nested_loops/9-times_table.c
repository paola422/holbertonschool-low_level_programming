#include "holberton.h"
/**
* times_table - Prints the 9 times table,starting with 0
*
* Return: void
*/
void times_table(void)
{
int n;
int mult;
int resul;
for (n = 0; n <= 9; n++)
{
_putchar('0');
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
resul = n * mult;
if (resul <= 9)
_putchar(' ');
else
_putchar((resul / 10) + '0');
_putchar((resul % 10) + '0');
}
_putchar('\n');
}
}


