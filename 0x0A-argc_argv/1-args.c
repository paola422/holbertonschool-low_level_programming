#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the number of arguments passed
*@argc: number of arguments
*@argv: brings arguments but is not used
*Return: 0
*/
int main(int argc, const char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
