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
long double h;
long double k1;
long double k2;

	while (f < 98)
	{
		if (f == 0)
		{
			printf("%Lf", i);
			printf(", ");
		}
		else if (f == 1)
		{
                        k1 = i;
                        k2 = j;
			printf("%Lf", j);
			printf(", ");
		}
		else
		{


			(long) h = k2 + k1;
			
			k1 = 0;
			(long) k1 = k2;
			
			k2 = 0;
			(long) k2 = h;
			
			printf("%Lf", h);
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
