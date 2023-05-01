#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  a function that prints all the elements of a listint_t
 * @h: linked list type listint_t to print
 
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (nodes);
}
