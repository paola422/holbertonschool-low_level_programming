#include "holberton.h"
/**
* print_last_digit - Function than prints last digit of a number
* @last: digit
* Return: number
*/
int print_last_digit(int last)
{
int num;
num = last % 10;
if (num < 0)
{
num = num * -1;
}
_putchar(num + '0');
return (num);
}
