#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * create_node - Creates a new node with the given string
 * @str: The string to be stored in the node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
List *create_node(char *str)
{
	List *new_node = malloc(sizeof(List));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = new_node;
	new_node->next = new_node;
	return (new_node);
}

/**
 * add_node_end - Adds a new node to the end of a double circular linked list
 * @list: A pointer to the head of the list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
List *add_node_end(List **list, char *str)
{
	List *new_node = create_node(str);

	if (!new_node)
		return (NULL);

	if (*list == NULL)
	{
		*list = new_node;
	}
	else
	{
		List *last = (*list)->prev;

		new_node->next = *list;
		new_node->prev = last;
		last->next = new_node;
		(*list)->prev = new_node;
	}

	return (new_node);
}

/**
 * add_node_begin - Adds a new node to the beginning of
 * a double circular linked list
 * @list: A pointer to the head of the list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node = create_node(str);

	if (!new_node)
		return (NULL);

	if (*list == NULL)
	{
		*list = new_node;
	}
	else
	{
		List *last = (*list)->prev;

		new_node->next = *list;
		new_node->prev = last;
		last->next = new_node;
		(*list)->prev = new_node;
		*list = new_node;
	}

	return (new_node);
}
