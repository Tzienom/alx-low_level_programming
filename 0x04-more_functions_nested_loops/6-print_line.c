#include "main.h"

/**
 * print_line - function to print straight line.
 * n: prints line based on integer argument passed to it.
 *
 * return: 0 if successful.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n >= 1)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
