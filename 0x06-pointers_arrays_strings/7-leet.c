#include "main.h"

/**
 * *leet - function to encode a string into 1337.
 * @str: pointer parameter to be used for encoding.
 *
 * Return: str.
 */
char *leet(char *str)
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
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 52;
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = 51;
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = 48;
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = 55;
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = 49;
	}
	return (str);
}
