#include "stdio.h"
/**
 * main - starting
 * Return: 0
 */
int main(void)
{
long double i = 1;
long double j = 2;
int f = 0;
int64_t h, k1, k2;

	while (f < 98)
	{
		if (f == 0)
		{
			printf("%.0Lf", i);
			printf(", ");
		}
		else if (f == 1)
		{
			k1 = i;
			k2 = j;
			printf("%.0Lf", j);
			printf(", ");
		}
		else
		{
			h = k1 + k2;
			k1 = k2;
			k2 = h;
			printf("%.0Lf", h);

			if (f != 97)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
