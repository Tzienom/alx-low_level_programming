#include "main.h"

/**
 * print_triangle - function to print triangle.
 * size: argument to determine triangle size.
 *
 * return: void.
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
