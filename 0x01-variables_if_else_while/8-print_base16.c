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
int number;
char letter;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	};

	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	};
	putchar('\n');
	return (0);
}
