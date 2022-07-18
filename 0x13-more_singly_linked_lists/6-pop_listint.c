#include "lists.h"

/**
 * pop_listint - deleting the head node
 *@head: head node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
listint_t *newnode = *head;
int num;

if (!*head)
{
return (0);
}

num = (*head)->n;
*head = newnode->next;
free(newnode);

return (num);
}
