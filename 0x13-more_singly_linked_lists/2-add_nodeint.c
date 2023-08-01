#include "lists.h"
/**
 * add_nodeint - adds a new node at start of the list
 * @head: first node pointer
 * @n: new node content
 *
 * Return: new node pointer on success, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
