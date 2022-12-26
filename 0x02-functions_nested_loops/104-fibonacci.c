#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	int f = 0;
	int array[98];

	while (f < 98)
	{
		if (f == 0)
		{
			array[0] = 1;
		}
		else if (f == 1)
		{
			array[1] = 2;
		}
		else
		{
			array[f] = array[f - 1] + array[f - 2];
		}

	printf("%d", array[f]);
	if (f != 97)
	{
	printf(",");
	}
	f++;
	}
	printf("\n");

	return (0);
}
