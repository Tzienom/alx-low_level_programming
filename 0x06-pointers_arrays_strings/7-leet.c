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
	char repstr[] = "aeotl";
	char REPSTR[] = "AEOTL";
	char leet[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == repstr[j] || str[i] == REPSTR[j])
			{
			       str[i] = leet[j];
			       break;
			}
		}
	}
	return (str);
}
