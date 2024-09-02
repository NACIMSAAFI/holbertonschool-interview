#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: Pointer to pointer of the first node of the listint_t list.
 * @number: Integer to be included in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;
	listint_t *previous = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (*head == NULL || (*head)->n >= number)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		current = *head;
		while (current != NULL && current->n < number)
		{
			previous = current;
			current = current->next;
		}
		previous->next = new;
		new->next = current;
	}

	return (new);
}
