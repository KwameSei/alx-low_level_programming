#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t
 * @h: the pointer to dlistint_t
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *newnode = h;
	size_t items = 0;

	while (newnode)
	{
		printf("%d\n", newnode->n);

		newnode = newnode->next;
		items++;
	}

	return (items);
}
