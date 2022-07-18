#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - prints the added node to a list
 * @n: the list
 *@head: the header node
 *
 * Return: the header node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));

if (!newnode)
{
return (NULL);
}

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (*head);
}
