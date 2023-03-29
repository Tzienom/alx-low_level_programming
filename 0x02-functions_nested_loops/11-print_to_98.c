#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print number up to 98 or down to 98.
 * @n: number to start printing from.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;
	int j;
	int first;

	first = 1;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d%s", i, (first) ? ", " : "");
		first = 0;
		printf("\n");
	}
	if (n >= 98)
	{
		for (j = n; j >= 98; j--)
			printf("%d%s", j, (first) ? ", " : "");
		first = 0;
		printf("\n");
	}
}
