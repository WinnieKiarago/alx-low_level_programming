#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies pointed string
 * @dest: buffer pointer
 * @src: string pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
