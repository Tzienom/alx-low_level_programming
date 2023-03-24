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
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
