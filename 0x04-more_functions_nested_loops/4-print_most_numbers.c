#include "main.h"

/**
 * print_most_numbers - function to print number 0 to 9, exempting 2 and 4.
 * void: this function has no return value.
 *
 * return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
