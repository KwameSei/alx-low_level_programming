#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the length of a list
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t a = 0;

while (h)
{
h = h->next;
a++;
}
return (a);
}
