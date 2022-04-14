#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Return: Doesn't return anything
 */
void print_numbers(void)
{
	char n;

	for(n = '0'; n < '10'; n++)
		_putchar(n);
		_putchar('\n');
}
