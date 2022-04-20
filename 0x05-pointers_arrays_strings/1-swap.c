#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Value to be evaluated
 * @b: Value to be evaluated
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
