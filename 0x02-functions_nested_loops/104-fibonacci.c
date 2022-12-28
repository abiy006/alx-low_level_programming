#include "stdio.h"
#include <stdint.h>
/**
 * main - starting
 * Return: 0
 */
int main(void)
{
uint64_t i = 1;
uint64_t j = 2;
int f = 0;
uint64_t h, k1, k2;

	while (f < 98)
	{
		if (f == 0)
		{
			printf("%lu", i);
			printf(", ");
		}
		else if (f == 1)
		{
			k1 = i;
			k2 = j;
			printf("%lu", j);
			printf(", ");
		}
		else
		{
			h = k1 + k2;
			k1 = k2;
			k2 = h;
			printf("%lu", h);

			if (f != 97)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
