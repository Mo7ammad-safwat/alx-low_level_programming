#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}
	return (sl);
}

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addMore;

	addMore = malloc(sizeof(list_t));
	if (addMore == NULL)
		return (NULL);
	addMore->str = strdup(str);

	addMore->len = _strlen(str);
	addMore->next = *head;
	*head = addMore;

	return (addMore);
}
