#include "stdio.h"
#include <stdint.h>
/**
 * main - starting
 * Return: 0
 */
int main(void)
{
unsigned long int i = 1;
unsigned long int j = 2;
int f = 0;
unsigned long int h, k1, k2;

	while (f < 98)
	{
		if (f == 0)
		{
			printf("%ld", i);
			printf(", ");
		}
		else if (f == 1)
		{
			k1 = i;
			k2 = j;
			printf("%ld", j);
			printf(", ");
		}
		else
		{
			h = k1 + k2;
			k1 = k2;
			k2 = h;
			printf("%ld", h);

			if (f != 97)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
