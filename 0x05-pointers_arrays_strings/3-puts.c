#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @*str: Value to be evaluated
 * @str: Value to be evaluated
 * Return: Void
 */
void _puts(char *str)
{
	int l = 0;


	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
