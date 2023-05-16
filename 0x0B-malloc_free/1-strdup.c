#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in mem
 * which contains a copy of the string given as a parameter.
 * @str: char string type
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy_s;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy_s = (char *)malloc((sizeof(char) * len) + 1);
	if (copy_s == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		copy_s[a] = str[a];
	copy_s[len] = '\0';

	return (copy_s);
}
