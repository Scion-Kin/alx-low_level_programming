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
	int **tda;
	int s, u;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	tda = malloc(height * sizeof(int *)); 
	if (tda == NULL)
		return (NULL);
	for (s = 0; s < height; s++)
	{
		tda[s] = malloc(width * sizeof(int));
		if (tda[s] == NULL)
		{
			for (u = 0; u < s; u++)
				free(tda[u]);
			free (tda);
			return (NULL);
		}
		for (u = 0; u < width; u++)
			tda[s][u] = 0;
	}
	return (tda);
}
