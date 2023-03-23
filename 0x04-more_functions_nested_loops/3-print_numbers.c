#include "main.h"

/**
 * print_numbers - Function to print numbers 0 to 9.
 * void: function does not have a return value.
 *
 * return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}
