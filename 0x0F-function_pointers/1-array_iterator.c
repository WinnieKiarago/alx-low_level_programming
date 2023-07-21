#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array element
 * @array: array
 * @size: size of array
 * @action: Pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
