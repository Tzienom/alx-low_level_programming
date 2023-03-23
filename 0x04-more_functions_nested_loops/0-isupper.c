#include "main.h"

/**
 * _isupper - function to check for uppercase character.
 * c: argument for _isupper.
 *
 * return: 0 if successful.
 */
int _isupper(int c)
{
	int i;
	int j;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	for (j = 97; i <= 122; i++)
	{
		if (c == j)
			return (0);
	}
	return (0);
}
