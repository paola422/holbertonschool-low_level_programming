#include "lists.h"
/**
* *add_nodeint - function that adds a new node at the beginning of a list
* @head: pointer head
* @n: list
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

	if (head == NULL)
	{
		return (NULL);
	}
	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	(*nodo).n = n;
	(*nodo).next = *head;
	*head = nodo;
	return (*head);
}
