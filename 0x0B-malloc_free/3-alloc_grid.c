#include "abiy.h"

/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers.
 * @width: width
 * @height: height
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **2D_arr;
	int w, h, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	2D_arr = (int **)malloc(sizeof(*2D_arr) * height);
	if (2D_arr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		2D_arr[x] = (int *)malloc(sizeof(int) * width);
		if (2D_arr[x] == NULL)
		{
			while (x--)
				free(2D_arr[x]);
			free(2D_arr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (z = 0; z < width; z++)
			2D_arr[h][z] = 0;

	return (2D_arr);
}
