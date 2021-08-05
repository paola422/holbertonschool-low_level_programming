#include "lists.h"
/**
* *add_nodeint_end - function that adds a node at end of list
* @head: pointer head
* @n: list
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end = malloc(sizeof(listint_t));
	listint_t *node2 = *head;

	if (node_end == NULL)
	{
		free(node_end);
		return (0);
	}
	(*node_end).n = n;
	(*node_end).next = NULL;
	if (*head == NULL)
	{
	*head = node_end;
	return (*head);
	}
	while ((*node2).next != NULL)
	{
	node2 = (*node2).next;
	}
	(*node2).next = node_end;
	return (*head);
}
