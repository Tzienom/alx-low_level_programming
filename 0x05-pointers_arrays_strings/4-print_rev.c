#include "main.h"

/**
 * print_rev - function to print string in reverse order.
 * @*s: pointer argument used for reverse printing.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length;
	int i;
	int j;

	length = 0;
	while (s[length] != '\0')
		length++;
	i = 0;
	j = length - 1;
	while (i <= j)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
