#include "main.h"

/**
 * _puts - this function prints a string followed by a new line to stdout.
 * @str: pointer argument to print to stdout.
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
