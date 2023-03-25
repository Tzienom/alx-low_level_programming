#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * c: argument for _islower.
 *
 * returns: 0 if successful.
 */
int _islower(int c)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}

	for (j = 65; j <= 90; j++)
	{
		if (c == j)
			return (0);
	}
	return (0);
}
