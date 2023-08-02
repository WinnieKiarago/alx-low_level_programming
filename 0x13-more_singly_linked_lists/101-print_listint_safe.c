#include "lists.h"
/**
 * print_listint_safe -  function that prints a linked list
 * @head: pointer
 *
 * Return: he number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *temp = head;
	size_t count = 0;

	while (current != NULL && temp != NULL && temp->next != NULL)
	{
		current = current->next;
		temp = temp->next->next;

		if (current == temp)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
