#include <stdio.h>

/**
 *_strlen - returns the length of a string
 *@s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (i > -1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	return (i);
}
