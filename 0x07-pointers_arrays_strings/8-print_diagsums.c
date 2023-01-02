#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - print diagonal sums
 * @a: sum of diagonal
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	unsigned int x, y;
	int z;

	x = 0;
	y = 0;

	for (z = 0; z < size; z++)
	{
		x += a[(size * z) + z];
		y += a[(size * (z + 1)) - (z + 1)];
	}
	printf("%d, %d\n", x, y);
}
