#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Runs the file and if the n > 0 prints positive and
  * n < 0 negative,else it will print 0
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{

		putchar(num);

		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
