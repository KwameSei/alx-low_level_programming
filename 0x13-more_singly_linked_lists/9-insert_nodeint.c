#include "lists.h"

/**
 * insert_nodeint_at_index - inserting node into a list
 *@head: head node
 *@idx: index of node
 *@n: integer
 *
 * Return: listint
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *node = *head;
unsigned int a = 0;

if (!newnode)
{
return (free(newnode), NULL);
}

newnode->n = n;
newnode->next = NULL;

if (*head == NULL && idx > 0)
{
free(newnode);
return (NULL);
}

if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}

for (; a < idx - 1; a++)
{
node = node->next;
if (node == NULL && idx - a > 0)
{
free(newnode);
return (NULL);
}
}

newnode->next = node->next;
node->next = newnode;

return (newnode);
}
