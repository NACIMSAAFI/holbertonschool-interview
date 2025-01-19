#include "binary_trees.h"
#include <stdlib.h>

/**
 * heapify_down - Restores the Max Heap property from the root downward
 * @node: Pointer to the current node
 */
void heapify_down(heap_t *node)
{
	heap_t *largest = node;
	heap_t *left = node->left;
	heap_t *right = node->right;

	if (left && left->n > largest->n)
		largest = left;
	if (right && right->n > largest->n)
		largest = right;

	if (largest != node)
	{
		int temp = node->n;

		node->n = largest->n;
		largest->n = temp;

		heapify_down(largest);
	}
}

/**
 * get_last_node - Finds the last node in level-order traversal
 * @root: Pointer to the root of the heap
 *
 * Return: Pointer to the last node
 */
heap_t *get_last_node(heap_t *root)
{
	if (!root)
		return (NULL);

	heap_t **queue = malloc(sizeof(heap_t *) * 1024);
	heap_t *last = NULL;
	int front = 0, rear = 0;

	queue[rear++] = root;

	while (front < rear)
	{
		last = queue[front++];
		if (last->left)
			queue[rear++] = last->left;
		if (last->right)
			queue[rear++] = last->right;
	}

	free(queue);
	return (last);
}

/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: The value of the root node, or 0 if root is NULL
 */
int heap_extract(heap_t **root)
{
	if (!root || !*root)
		return (0);

	heap_t *last, *parent;
	int root_value;

	root_value = (*root)->n;

	last = get_last_node(*root);

	if (last == *root)
	{
		free(*root);
		*root = NULL;
		return (root_value);
	}

	parent = last->parent;

	(*root)->n = last->n;
	if (parent->left == last)
		parent->left = NULL;
	else
		parent->right = NULL;

	free(last);

	heapify_down(*root);

	return (root_value);
}
