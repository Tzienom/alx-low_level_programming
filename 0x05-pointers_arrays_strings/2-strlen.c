#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: argument whose length is to be found.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
