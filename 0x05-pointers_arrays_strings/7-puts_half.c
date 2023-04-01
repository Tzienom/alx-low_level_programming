#include "main.h"

/**
 * puts_half - function to print the second half of a string.
 * @str: argument used for getting second half.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
		length++;
	if (length % 2 != 0)
		i = length / 2 + 1;
	else
		i = length / 2;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
