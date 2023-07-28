#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[length])
		length++;

	tmp->len = length;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

