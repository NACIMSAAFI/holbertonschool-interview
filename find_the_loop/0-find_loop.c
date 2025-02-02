#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	/* Step 1: Detect if there is a loop */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;		 /* Move slow pointer one step */
		fast = fast->next->next; /* Move fast pointer two steps */

		/* If slow and fast meet, there is a loop */
		if (slow == fast)
		{
			/* Step 2: Find the start of the loop */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow); /* Return the start of the loop */
		}
	}

	/* If no loop is found, return NULL */
	return (NULL);
}
