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
	const listint_t *temp = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		count++;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->);
			exit(98);
		}
	}
}

