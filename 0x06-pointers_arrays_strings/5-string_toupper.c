#include "main.h"

/**
 * *string_toupper - function to change lowercase letters to uppercase.
 * @str: pointer parameter to be used for case conversion.
 *
 * Return: 
 */
char *string_toupper(char *str)
{
	int i;
	int j;
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	j = length;
	for (i = 0; i < j; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return str;
}
