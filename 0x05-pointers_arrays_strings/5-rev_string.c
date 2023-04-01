#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: argument to be used for reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length;
	int i;
	int j;
	char revstr;

	length = 0;
	while (s[length] != '\0')
		length++;
	i = 0;
	j = length - 1;
	while (i <= j)
	{
		revstr = s[i];
		s[i] = s[j];
		s[j] = revstr;
		j--;
		i++;
	}
}
