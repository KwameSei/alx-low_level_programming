#include "lists.h"

/**
 * dlistint_len - a function that prints all the elements of a dlistint_t
 * @h: the pointer to dlistint_t
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *newnode = h;
	size_t items = 0;

	while (newnode)
	{
		newnode = newnode->next;
		items++;
	}

	return (items);
}
