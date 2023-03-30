#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * without the null-terminator.
 * @dest: pointer to hold concatenated string.
 * @src: source from which string is concatenated.
 * @n: number of characters to be concatenated into dest.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
