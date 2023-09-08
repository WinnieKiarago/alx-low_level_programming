#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1:string to append to
 * @s2:string to concatenate
 * @n:number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	char *result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
