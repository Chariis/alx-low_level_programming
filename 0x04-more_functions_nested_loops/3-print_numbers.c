#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Return: Doesn't return anything
 */
void print_numbers(void)
{
	char c;

	for(c = '0'; c <= '9'; c++)
	_putchar(c);
	_putchar('\n');
}
