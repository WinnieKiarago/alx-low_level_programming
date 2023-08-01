#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to freed linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;


	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
