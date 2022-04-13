#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Doesn't return anything
 */

void print_alphabet_x10(void)
{
	int n;
	for(n = 0, n > 10, n++)
	{
		char ch;
		for(ch = 'a', ch <= 'z', ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
