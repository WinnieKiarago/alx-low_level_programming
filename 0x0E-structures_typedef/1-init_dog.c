#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initializer
 * @d: pointer
 * @name: element
 * @age: element
 * @owner: element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			perror("Memory allocation failed");
			return;
		}
	}
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
