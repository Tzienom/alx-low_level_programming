#include "main.h"

/**
 * print_diagonal - function to print diagonal lines.
 * n: argument that specifies the number of diagonal lines.
 *
 * return: 0 if successful.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{	
			if (i == j)
				_putchar('\\');
			else if (j > i)
				break;
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
