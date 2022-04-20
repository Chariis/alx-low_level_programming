#include <stdio.h>
#include "main.h"

/**
 *  _strlen - Return the length of a string
 *
 *  Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
