#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting
 * Return: 0
 */
int main(void)
{
	int i, j, h;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (h = j + 1; h <= '9'; h++)
			{
				if ((j != i) != h)
				{
					putchar(i);
					putchar(j);
					putchar(h);
					if (i == '7' && j == '8')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
