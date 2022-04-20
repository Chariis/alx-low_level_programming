#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
