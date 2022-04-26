#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string
 *@c: cutoff
  Return: the number of bytes that compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
		else
		{
			j = i++;
			s[i] = s[j];
		}
	}
	return (0);
}
