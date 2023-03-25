#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: the character to be checked.
 *
 * return: 1 if lowercase character, and 0 otherwise.
 * Return: 0 if successful.
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
