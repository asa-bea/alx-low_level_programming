#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description - 'a function concatenating two strings, using malloc'
 * @s1: char string type
 * @s2: char string type
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, a, b;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[len1] != '\0'; a++)
	{
		len1++;
	}

	for (a = 0; s2[len2] != '\0'; a++)
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		result[a] =  s1[a];
	}
	for (b = 0; b < len2; b++)
	{
	result[a + b] = s2[b];
	}
	return (result);
}
