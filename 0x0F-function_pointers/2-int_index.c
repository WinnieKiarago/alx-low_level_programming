#include "function_pointers.h"
/**
 * int_index - returns index of 1st element for which cmp fn doesnt return 0
 * @array: array
 * @size: number of array elements
 * @cmp: function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
