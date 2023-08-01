#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: first element list pointer
 * Return: deleted elements else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data = (*head)->n;

	if (!head || !*head)
		return (0);
	*head = (*head)->next;
	free(current);
	return (data);
}
