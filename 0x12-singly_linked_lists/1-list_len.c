#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that prints the number of elements
 * in a linked list
 * @h: list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
