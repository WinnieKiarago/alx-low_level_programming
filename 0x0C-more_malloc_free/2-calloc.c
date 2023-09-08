#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 **_calloc - assigns memory
 * @nmemb:number of elements
 * @size:size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	size_t total_size = (size_t)nmemb * size;
	void *ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
