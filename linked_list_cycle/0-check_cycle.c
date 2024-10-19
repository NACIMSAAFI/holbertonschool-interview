#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	if (list == NULL)
	{
		return (0);
	}

	listint_t *tmp1 = list;
	listint_t *tmp2 = list;

	while (tmp2 != NULL && tmp2->next != NULL)
	{
		tmp1 = tmp1->next;
		tmp2 = tmp2->next->next;

		if (tmp2 == tmp1)
		{
			return (1);
		}
	}

	return (0);
}
