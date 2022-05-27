#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list print
 * Return: the number of nodesin the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodesnum = 0;


	while (h)
	{
		nodesnum++;
		printf("%d\n", h->n);
		h = h->next;
	}


	return (nodesnum);
}
