#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
unsigned long i = 1;
unsigned long j = 2;
int f = 0;
unsigned long h;
unsigned long k1;
unsigned long k2;

	while (f < 98)
	{
		if (f == 0)
		{
			printf("%lu", i);
			printf(", ");
		}
		else if (f == 1)
		{
			h = i + j;
			printf("%lu", j);
			printf(", ");
		}
		else
		{
			printf("%lu", h);
			if (f != 97)
			{
				printf(", ");
			}

			k1 = k2;
			k2 = h;
			h = k1 + k2;

		}
	f++;
	}
	printf("\n");

	return (0);
}
