#include "abiy.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print name
 *@argi: int.
 *@argj: char.
 * Return: Always 0.
 */
int main(int argi, char *argj[])
{
	int a, b;
	int sum = 0;

	if (argi < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argi; a++)
	{
		for (b = 0; argj[a][b] != '\0'; b++)
		{
			if (argj[a][b] < '0' || argj[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argj[a]);
	}
	printf("%d\n", sum);
	return (0);
}
