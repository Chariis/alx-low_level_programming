#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase characters
 *
 * Return: Always 1 (Success), 0 otherwise
 */
int _isupper(int c)
{
	if(isupper(c))
		return (1);
	else 
		return (0);
}
