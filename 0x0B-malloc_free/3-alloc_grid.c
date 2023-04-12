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
	int **bef;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bef = malloc(sizeof(int *) * height);

	if (bef == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		bef[a] = malloc(sizeof(int) * width);
		if (bef[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(bef[a]);
			}
			free(bef);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			bef[a][b] = 0;
	}
	return (bef);
}
