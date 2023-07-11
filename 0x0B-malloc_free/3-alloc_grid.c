#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		c[x] = malloc(sizeof(int) * width);

		if (c[x] == NULL)
		{
			for (; x >= 0; x--)
				free(c[x]);

			free(c);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			c[x][y] = 0;
	}

	return (c);
}
