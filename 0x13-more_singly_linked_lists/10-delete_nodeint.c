#include "lists.h"

/**
 * delete_nodeint_at_index - deleting node from a list
 *@head: head node
 *@index: index of node
 *
 * Return: integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a = 0;
listint_t *b = *head;
listint_t *node;

if (!*head)
return (-1);
if (index == 0)
{
node = *head;
*head = (*head)->next;
free(b);
return (1);
}
while (b)
{
if (a  == index - 1)
{
node = b->next;
b->next = node->next;
free(node);
return (1);
}
b = b->next, a++;
}
return (-1);
}
