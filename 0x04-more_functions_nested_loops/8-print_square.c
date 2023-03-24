#include "main.h"

/**
 * print_square - fuction to print square.
 * size: argument to determine square size.
 *
 * return: void.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
