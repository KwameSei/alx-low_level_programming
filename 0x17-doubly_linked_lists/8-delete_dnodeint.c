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

	while (items)
	{
		newnode = newnode->next;
		items++;
	}

	return (items);
}

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: the index of the node to delete
 *
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *newnode = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(newnode) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = newnode->next;
		if (newnode->next)
			newnode->next->prev = NULL;
		newnode->next = NULL;
		free(newnode);
		return (1);
	}
	while (i < index)
	{
		newnode = newnode->next;
		i++;
	}
	newnode->prev->next = newnode->next;
	if (newnode->next)
		newnode->next->prev = newnode->prev;
	free(newnode);

	return (1);
}
