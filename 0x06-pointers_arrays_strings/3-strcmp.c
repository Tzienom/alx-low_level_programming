#include "main.h"

/**
 * _strcmp - function to compare two strings.
 * @s1: first argument to be used for comparison.
 * @s2: second argument to be used for comparison.
 *
 * return: 15 if s1 > s2, -15 if s1 < s2, and 0 if equal.
 * Return: 0 if successful.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != s2[j] && (s1[i] && s2[j]) != '\0')
	{
		return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}
