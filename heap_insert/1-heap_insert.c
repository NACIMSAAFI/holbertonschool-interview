#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}

/**
 * swap - Swaps two integer values
 * @parent: Pointer to the first value
 * @node: Pointer to the second value
 */
void swap(int *parent, int *node)
{
	int tmp;

	tmp = *node;
	*node = *parent;
	*parent = tmp;
}

/**
 * find_parent - Finds the parent of the node to insert
 * @tree: Tree to search
 * @index: Index of the tree node
 * @size: Size of the tree
 * Return: Pointer to the parent node
 */
heap_t *find_parent(heap_t *tree, int index, int size)
{
	heap_t *l_c, *r_c;

	if (index == size)
		return (tree);

	if (index > size)
		return (NULL);

	l_c = find_parent(tree->left, 2 * index + 1, size);
	r_c = find_parent(tree->right, 2 * index + 2, size);

	if (l_c)
		return (l_c);
	else if (r_c)
		return (r_c);
	else
		return (NULL);
}

/**
 * insert_node - Inserts a new node into the heap
 * @tree: Tree into which to insert the node
 * @new: Node to insert
 * Return: Pointer to the parent node of the new node
 */
heap_t *insert_node(heap_t *tree, heap_t *new)
{
	int size = binary_tree_size(tree);
	heap_t *parent = find_parent(tree, 0, ((size - 1) / 2));

	if (!parent->left)
		parent->left = new;
	else
		parent->right = new;

	return (parent);
}

/**
 * heap_insert - Inserts a value into a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 * @value: Value to insert
 * Return: Pointer to the inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new = binary_tree_node(NULL, value), *parent;

	if (!root)
		return (NULL);
	if (!(*root))
	{
		*root = new;
		return (new);
	}
	parent = insert_node(*root, new);
	new->parent = parent;

	while (new->parent && new->n > new->parent->n)
	{
		swap(&new->parent->n, &new->n);
		new = new->parent;
	}

	return (new);
}
