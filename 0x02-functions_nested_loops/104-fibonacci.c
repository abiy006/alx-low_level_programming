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

	while (f < 98)
	{
		long double c1, c2, h;

		if ((f != 1) || (f != 2) || (f != 3))
		{
		c1 = c2;
		c2 = h;
		}

		if (f == 0)
		{
			printf("%.0Lf", i);
			printf(", ");
		}
		else if (f == 1)
		{
			c1 = i;
			c2 = j;
			printf("%.0Lf", j);
			printf(", ");
		}
		else
		{
			h = c1 + c2;
			printf("%.0Lf", h);

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
