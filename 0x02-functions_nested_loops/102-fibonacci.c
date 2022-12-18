#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long j = 1;
	long h = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
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
