#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to freed linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
