#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @i: integer to be computed.
 *
 * return: value of integer without the negative sign (if any).
 * Return: 0 if successful.
 */
int _abs(int i)
{
	int abs_value;

	if (i < 0)
	{
		abs_value = i * (-1);
		return(abs_value);
	}
	else if (i > 0)
	{
		abs_value = i * 1;
		return (abs_value);
	}
	return (0);
}
