#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int h = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf(", %ld", h);
		else
		{
			h += j;
			j = h - j;
			printf(", %ld", h);
		}
		i++;
	}
	printf("\n");
	return (0);
}
