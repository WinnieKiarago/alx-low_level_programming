#include "main.h"
#include <stdio.h>
 /**
  * create_array - creates an array
  * @size: size of the integer
  * @c: character to fill the array
  * Description : create an array of size, size and assign char c
  * Return: array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (a = 0; a < size, a++)
	{
		b[a] = c;
	}
	return (b);
}
