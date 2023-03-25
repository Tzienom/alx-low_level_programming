#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: number to be checked.
 *
 * return: 1 and print + if n is greater than 0. 0 and print 0
 * if n is zero. -1 and print - if n is less than zero.
 * Return: 0 if successful.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
