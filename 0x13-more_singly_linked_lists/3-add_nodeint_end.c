#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - prints the added node to the end of a list
 * @n: the list
 *@head: the header node
 *
 * Return: the header node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *tail = *head;

if (!newnode)
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;

if (!(*head))
{
*head = newnode;
}
else
{
while (tail->next)
{
tail = tail->next;
}
tail->next = newnode;
}
return (*head);
}
