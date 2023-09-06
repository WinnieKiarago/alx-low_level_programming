#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -new memory space duplicate
 *@str: character
 *Return: 0
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	return (copy);
}
