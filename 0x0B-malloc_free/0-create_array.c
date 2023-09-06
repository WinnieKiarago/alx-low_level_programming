#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array (size) which takes char c
 * @size: size of array
 * @c: assigned character
 * Return: NULL if size = 0 or if it fails else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char a;
	unsigned int b;

	a = malloc(size_of(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
