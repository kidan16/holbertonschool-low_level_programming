#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		ar[i] = malloc(sizeof(int) * width);

	if (*ar == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			ar[j][i] = 0;
	}
	return (ar);
	free(**ar);
}