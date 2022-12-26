#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	double i, j;
	int f = 0;
	double h;
	double k1;
	double k2;

	while (f < 98)
	{
		if (f == 0)
		{
			i = 1;
			printf("%lf", i);
			printf(", ");
		}
		else if (f == 1)
		{
			j = 2;
			h = i + j;
			k1 = i;
			k2 = j;
			printf("%lf", j);
			printf(", ");
		}
		else
		{
			h = k1 + k2;
			printf("%lf", h);
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
