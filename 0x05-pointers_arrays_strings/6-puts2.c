#include "main.h"

/**
 * puts2 - function that prints every two element starting from the first.
 * @*str: pointer parameter to be used in twos counting.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int length;
	int i;
	int j;

	length = 0;
	while (str[length] != '\0')
		length++;
	j = length - 1;
	for (i = 0; i <= j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
