#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	unsigned long long i, j;
	int f = 0;
	unsigned long long h;
	unsigned long long k1;
	unsigned long long k2;

	while (f < 98)
	{
		if (f == 0)
		{
			i = 1;
			printf("%llu", i);
			printf(", ");
		}
		else if (f == 1)
		{
			j = 2;
			h = i + j;
			k1 = i;
			k2 = j;
			printf("%llu", j);
			printf(", ");
		}
		else
		{
			h = k1 + k2;
			printf("%llu", h);
			k1 = k2;
			k2 = h;
				if (f != 97)
				{
					printf(", ");
				}
		}
	f++;
	}
	printf("\n");

	return (0);
}
