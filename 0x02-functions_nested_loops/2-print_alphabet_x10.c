#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabets ten times.
 * void: function has no return value.
 *
 * return: void.
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

int print_tentimes(int i)
{
	for (i = 1; i <= 10; i++)
		print_alphabet_x10();
}
