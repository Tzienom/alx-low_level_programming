#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: argument for _isalpha.
 *
 * return: 1 if alphabet, and 0 for number.
 * return: 0 if successful.
 */
int _isalpha(int c)
{
	int i;
	int j;
	int k;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	for (j = 97; j <= 122; j++)
	{
		if (c == j)
			return (1);
	}
	for (k = 48; k <= 57; k++)
	{
		if (c == k)
			return (0);
	}
	return (0);
}
