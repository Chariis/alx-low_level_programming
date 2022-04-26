#include "main.h"
/**
 * _strchr - gets the length of a prefix substring
 * @s: string
 * @c: cutoff
 *
 * Return: the number of bytes that compose the length
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
