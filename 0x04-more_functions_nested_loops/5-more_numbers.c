#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times.
 * void: this function has no return value.
 *
 * return: void.
 */
void more_numbers(void)
{
	int i;
	char c[] = "01234567891011121314";

	for (i = 0; i <= 9; i++)
		_putchar(c[i]);
	_putchar('\n');
}

/**
int x_fourteen(int i)
{
	for (i = '1'; i <= 'e'; i++)
		more_numbers();
	return (0);
}*/
