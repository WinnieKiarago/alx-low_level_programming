#include "lists.h"
/**
 * get_nodeint_at_index - returns node index
 * @head: linked list first node
 * @index: return node index
 * Return: Node pointer else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}
	return (NULL);
}
