#include "stdio.h"

/**
 * main - starting
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long j = 1;
	long h = 2;
	long s = h;

	while (h + j < 4000000)
	{
		h += j;
		if (h % 2 == 0)
		s += h;
		j = h - j;
		i++;
	}
	printf("%ld\n", s);
	return (0);
}
