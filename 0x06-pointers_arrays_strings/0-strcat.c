#include <stdio.h>
#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: Variable to be evaluated
 * @src: Variable to be evaluated
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
