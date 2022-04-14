#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * Return: Always 1,0 (Success), otherwise -1
 */

int print_sign(int n)
{
	if(n * (_-1) < 0)
	{
		putchar('+');
		return (1);
	}
	else if(n * (_-1) > 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}

}
