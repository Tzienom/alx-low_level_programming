#include "main.h"

/**
 * main - check the code.
 * void: argument for main.
 *
 * return: 0 if successful.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
