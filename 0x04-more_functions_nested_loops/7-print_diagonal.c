#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the screen
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;	

		if (n <= 0)
			_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
