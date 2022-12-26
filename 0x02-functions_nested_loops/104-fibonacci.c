#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	int i, j;
	int f = 0;
	int h = 0;
	int h1 = 0;
	int h2 = 0;

	while (f < 98)
	{
		if (f == 0)
		{
			i = 1;
			h1 = i;
			printf("%d", i);
			printf(",");
		}
		else if (f == 1)
		{
			j = 2;
			h2 = j;
			printf("%d", j);
			printf(",");
		}
		else
		{
			h = h1 + h2;
			printf("%d", h);
			if (f != 97)
			{
				printf(",");
			}
		h2 = h;
		h1 = h2;
		}
	f++;
	}
	printf("\n");

	return (0);
}
