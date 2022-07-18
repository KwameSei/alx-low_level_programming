#include "lists.h"

/**
 * get_nodeint_at_index - returning the nth node of a list
 *@head: head node
 *@index: node index
 *
 * Return: list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *newnode = head;
unsigned int a;

if (!head)
{
return (0);
}

for (a = 0; newnode; a++)
{
if (a == index)
{
return (newnode);
}
newnode = newnode->next;
}
return (NULL);
}
