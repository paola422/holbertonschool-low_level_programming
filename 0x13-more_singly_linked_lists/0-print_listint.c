#include "lists.h"

/**
* print_listint - Function that prints all the elements of a list
* @h: list
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		n++;
	}
	return(n);
}

