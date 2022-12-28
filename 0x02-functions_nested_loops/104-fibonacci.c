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
                        k1 = i;
                        k2 = j;
			printf("%lu", j);
			printf(", ");
		}
		else
		{


			h = k2 + k1;
			
			k1 = 0;
			k1 = k2;
			
			k2 = 0;
			k2 = h;
			
			printf("%lu", h);
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
