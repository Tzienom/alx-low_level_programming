#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: destination for string to be copied into.
 * @src: source from which string is gotten.
 * @n: number of characters to be copied into dest.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
