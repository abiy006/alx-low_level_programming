#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	long i, j;
	int f = 0;
	long h = 0;
	long k1 = 0;
	long k2 = 0;

	while (f < 98)
	{
		if (f == 0)
		{
			i = 1;
			printf("%lu", i);
			printf(",");
		}
		else if (f == 1)
		{
			j = 2;
			h = i + j;
			k1 = i;
			k2 = j;
			printf("%lu", j);
			printf(",");
		}
		else
		{
			h = k1 + k2;
			k1 = k2;
			k2 = h;
			printf("%lu", h);
			if (f != 97)
			{
				printf(",");
			}
		}
	f++;
	}
	printf("\n");

	return (0);
}
