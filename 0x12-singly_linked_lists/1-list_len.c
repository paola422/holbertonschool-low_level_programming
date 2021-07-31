#include "lists.h"
/**
 * list_len - Return a list
 * @h: head pointer list
 * Return: N
 */
size_t list_len(const list_t *h)
{
	const list_t *buff;
	unsigned int i;

	buff = h;
	for (i = 0; buff; i++)
		buff = buff->next;
	return (i);
}

