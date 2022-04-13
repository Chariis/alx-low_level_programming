#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lower case characters
 *
 * Return: Always 1 (Success), 0 (Otherwise)
 */

int _islower(int c)
{
	if(islower(c))
	{
		int c;

		printf("Return value when %c is passed to islower(): %d", c, islower(c));
		return (1);
	}
	else       
	{
		int c;

		printf("Return value when %c is passed to islower(): %d", c, islower(c));                                       
		return(0);       

	}
}

