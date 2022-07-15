#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "lists.h"

int _strlen(const char *s);

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the list
 * @str: the string
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *endnode;

if (!head || !str)
{
return (NULL);
}

endnode = *head;
newnode = malloc(sizeof(list_t));

if (!newnode)
{
return (NULL);
}
newnode->str = strdup(str);

if (!newnode->str)
{
free(newnode);
return (NULL);
}

newnode->len = _strlen(str);
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while (endnode->next != NULL)
{
endnode = endnode->next;
}
endnode->next = newnode;

return (newnode);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 *
 * Return: The lenght of the string
 */

int _strlen(const char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
;

return (a);
}
