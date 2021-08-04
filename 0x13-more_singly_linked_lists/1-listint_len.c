#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linked list.
* @h: elements
* Return: number
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = (*h).next;
		n++;
	}
	return (n);
}
