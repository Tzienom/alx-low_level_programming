#include "main.h"

/**
 * print_alphabet - function to print alphabets.
 * void: function has no return value.
 *
 * return: void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
