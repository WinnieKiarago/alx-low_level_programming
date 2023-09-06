#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - makes grid
 *@width: width input
 *@height: height input
 *Return: NULL If width or height is 0 or negative and on fail
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
int main(void)
{
	int width = 4;
	int height = 3;

	int **myGrid = alloc_grid(width, height);

	if (myGrid != NULL)
	{
		myGrid[1][2] = 42;

		for (int i = 0; i < height; i++)
		{
			free(myGrid[i]);
		}
		free(myGrid);
	}
	else
	{
		char msg[] = "Memory allocation failed.\n";

		for (int i = 0; msg[i] != '\0'; i++)
		{
			_putchar(msg[i]);
		}
	}
	return (0);
}
