#include <stdio.h>
#include <stdlib.h>
#include "abiy.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argi: Number of command line arguments
 * @argj: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argi, char *argj[])
{
	int a, b;

	if (argi == 1 || argi == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(argj[a]);

		printf("%d\n", b);
	}

	return (0);
}
