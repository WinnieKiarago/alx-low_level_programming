#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list first node pointer
 * @idx: where node is added
 * @n: new node data
 *
 * Return: new node pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			temp->next = new;
			return (new);
		}
		else
			current = current->;
	}
	return (NULL);
}
