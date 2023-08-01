#include "lists.h"
/**
 * add_nodeint - adds a new node at start of the list
 * @head: first node pointer
 * @n: new node content
 *
 * Return: new node pointer on success, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
