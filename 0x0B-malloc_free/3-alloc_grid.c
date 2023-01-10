#include "abiy.h"

/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers.
 * @width: width
 * @height: height
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **D_arr;
	int w, h, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	D_arr = (int **)malloc(sizeof(*D_arr) * height);
	if (D_arr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		D_arr[x] = (int *)malloc(sizeof(int) * width);
		if (D_arr[x] == NULL)
		{
			while (x--)
				free(D_arr[x]);
			free(D_arr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (z = 0; z < width; z++)
			D_arr[h][z] = 0;

	return (D_arr);
}
