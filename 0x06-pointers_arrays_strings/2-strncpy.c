#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * *dest: destination for string to be copied into.
 * *src: source from which string is gotten.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[j] = '\0';
		i++;
	}
	return dest;
}
