#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print all alphabets in lower case
 *
 * Return: Doesn't return anything
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
