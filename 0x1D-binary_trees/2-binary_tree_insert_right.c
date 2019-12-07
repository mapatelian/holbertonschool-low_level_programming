#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: pointer to the parent node
 * @value: value to be inserted
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (!parent)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right)
	{
		free(new_right);
		return (NULL);
	}

	new_right->n = value;
	new_right->left = NULL;

	if (parent->right)
	{
		new_right->right = parent->right;
		new_right->right->parent = new_right;
	}
	else
		new_right->right = NULL;

	parent->right = new_right;
	new_right->parent = parent;

	return (new_right);
}
